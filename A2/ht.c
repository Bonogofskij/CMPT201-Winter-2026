/* ht.c
 *
 * TODO: Provide a high-level description of what is contained
 * in this file.
 *
 * Author: June Bonogofski
 * Lab instructor: Dhara Wagh
 * Lecture instructor: Ardy
 */

#include <stdio.h>      //printf()
#include <stdlib.h>     //memory allocation stuff
#include <string.h>     //strcpy()
#include <stdint.h>     //uint64_t
#include "ht.h"         //Import the public hashtable header
#include "ht_impl.h"    //Also import the private header, just for us
#include "prime.h"      //prime functions

hashtable ht_create() {   //Creates an array of struct ht's and returns a pointer to it
   hashtable create = calloc(START_SIZE, (sizeof(struct ht)));  //Allocate and 0 memory for START_SIZE # of struct ht's

   if (create == NULL) {         //If memory allocation failed
      return NULL;               //Return NULL
   }

   create->capacity = START_SIZE;   //Track the size of the current table
   create->slotsFull = 0.00;           //New tables start at capacity = 0
   create->items = calloc(create->capacity, sizeof(struct ht));   //Allocate the array of hts with NULL value

   return create;                //Return the hashtable pointer
};

hashtable ht_create_size(float oldCapacity) {
   hashtable newHt = malloc(sizeof(struct ht));    //Allocate memory for a new hashtable of given size
   float newCapacity = newPrime(oldCapacity);
   newHt->capacity = newCapacity;   //Set the capacity to the new table size
   
   newHt->slotsFull = (float)0;     //New table have all slots free

   newHt->items = calloc((size_t)newHt->capacity, sizeof(struct node));

   return newHt;
}

static struct node HT_DELETED_ITEM = {NULL, NULL};    //Deleted node tracker

void ht_remove(hashtable ht, const char *key) {       //Remove a node with the given key from given hashtable
   int index = hash(key, ht->capacity);               //Get the index of the key to start our search
   struct node * newNode = ht->items[index];          //Create a new pointer to the node at ht->items[index]

   while (newNode != NULL) {                       //While newNode points to a valid node
      if (newNode != &HT_DELETED_ITEM) {           //And the node hasnt been deleted already
         if (strcmp(newNode->city, key) == 0) {         //If this node has the key we want
            free(newNode->city);                   //Free the city
            free(newNode->value);                  //Free the value
            free(newNode);                         //Free the node itself
            ht->items[index] = &HT_DELETED_ITEM;   //Mark that index as deleted
         }
      }
      index = (index + 1) % (int)ht->capacity;     //Advance the index by 1
   }
   ht->slotsFull--;                                //Count has to decrease when we delete
}

void ht_free(hashtable ht) {                       //Free all allocated memory for a hashtable
   int i;                                          //Looping variable

   for (i = 0; i < (int)ht->capacity; i++) {       //For each slot in the hashtable    
      struct node * tmp = ht->items[i];            //Create a pointer to that slot struct node
      if (tmp != NULL) {                           //If the slot ISNT NULL
         free(tmp);                                //We have to free it
      }
   }
   free(ht);                                       //Free the table itself
}

void ht_resize(hashtable ht, float oldCapacity) {
   hashtable newHt = ht_create_size(oldCapacity);     //Create a new hashtable with the next capacity up

   int i;         //Looping variable

   for (i = 0; i < (int)ht->capacity; i++) {                //For each slot in the input hashtable
      struct node *newNode = ht->items[i];                  //Create a new node with the same data
      if (newNode != NULL) {  //Make sure the node points to a real node
         ht_insert(newHt, newNode->city, newNode->value);   //Insert the node into the new hashtable
      }
   }

   ht->slotsFull = newHt->slotsFull;   //original slotsFull set to new slots full, after insertion

   ht->capacity = newHt->capacity;     //change original ->capacity to new->capacity
   newHt->capacity = oldCapacity;      //Swap oldCapacity into the new table

   struct node **newItems = ht->items; //Create a pointer to the list of struct nodes in original table
   ht->items = newHt->items;           //Swap newHt->items with oldHt->items
   newHt->items = newItems;            //Give newHt oldHt's list

   ht_free(newHt);
}

int hash(const char *s, int capacity) {   //Hashing function, takes a string and outputs a uint64_t hash value
   int length = strlen(s);       //Length of the string for looping
   uint64_t hashVal = 5381;      //Start the hashValue at 5381, cool lookin prime
   int i;                        //Variable for looping

   for (i = 0; i < length; i++) {         //For every character in the string
      hashVal += s[i] + (hashVal * 33);   //Add hashvalue to the digit + itself*33
   }

   return (int)(hashVal % capacity);      //The hashed Value gets returned from function
};

void ht_insert(hashtable ht, char *key, void *value) {   //Create a node and insert it into given hashtable
   float full = (float)ht->slotsFull;
   float cap = (float)ht->capacity;
   
   if ((full / cap) > 0.66) {
      ht_resize(ht, ht->capacity);
   }
   
   int index = hash(key, ht->capacity);                  //Use the hash funtion to determine the index we want to place the node at
   struct node *newNode = malloc(sizeof(struct node));   //Allocate memory for a new node
   newNode->city = key;          //Set city, value, and a flag for deleted

   newNode->value = value;

   while (ht->items[index] != NULL) {        //If the ideal index is already occupied
      index = (index + 1) % (int)ht->capacity;    //Try the next one
   }
   ht->slotsFull += 1;

   ht->items[index] = newNode;   //Make sure the right index points to the node
};

void * ht_lookup(const hashtable ht, const char *key) {  //Finds every value associated with the hashed value of 'key' in a given table
   int index = hash(key, ht->capacity);      //Hash function to get the index to start looking in   
   void *ptr = &ht->items[index]->value;     //Void pointer to store value of node->value
   return ptr;    //Return void pointer to node->value
};

void ht_print_dist(const hashtable ht) {     //Formats and prints the cities in the hashtable
   int i;                                    //Looping variable
   char *cPtr;                               //Pointer to store city value of each valid node

   for (i = 0; i < ht->capacity; i++) {      //Check every item slot form 0 to capacity-1
      if (ht->items[i] != NULL) {            //If theres a node at this index
         cPtr = ht->items[i]->city;          //Save the node->city to our pointer
         printf("%s\n", cPtr);               //Print the city
      } else {                               //If there's no node at this index
         printf("'''\n");                    //Print placeholder text
      }
   }
};