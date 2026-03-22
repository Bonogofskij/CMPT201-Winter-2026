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
#include "findPrime.h"  //Boolean prime finder

hashtable ht_create() {   //Creates an array of struct ht's and returns a pointer to it
   hashtable create = calloc(START_SIZE, (sizeof(struct ht)));  //Allocate and 0 memory for START_SIZE # of struct ht's

   if (create == NULL) {         //If memory allocation failed
      return NULL;               //Return NULL
   }

   create->capacity = START_SIZE;   //Track the size of the current table
   create->slotsFull = 0;           //New tables start at capacity = 0
   create->items = calloc(create->capacity, sizeof(struct ht));   //Allocate the array of hts with NULL value

   return create;                //Return the hashtable pointer
};

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
   int index = hash(key, ht->capacity);
   struct node * newNode = malloc(sizeof(struct node));  //Create a node called newNode and allocate memory
   strcpy(newNode->city, key);   //New node, so it cant be one that's deleted
   newNode->value = value;
   newNode->deleted = 0;
   ht->items[index] = newNode;
};