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
#include <string.h>     //strnlen()
#include <stdint.h>     //uint64_t
#include "ht.h"         //Import the public hashtable header
#include "ht_impl.h"    //Also import the private header, just for us
#include "findPrime.h"  //Boolean prime finder

#define INITIAL_SIZE 31

struct ht {             //Basic node in our hashtable
   const char * name;   //The name (or string) associated with the node
   uint64_t value;      //The key for the hashtable given the name string      //The actual entries in the table
};

hashtable ht_create(void) {   //Creates an array of struct ht's and returns a pointer to it
   hashtable create = calloc(INITIAL_SIZE, (sizeof(struct ht)));  //Allocate and 0 memory for INITAIL_SIZE # of struct ht's

   if (create == NULL) {         //If memory allocation failed
      return NULL;               //Return NULL
   }

   return create;                //Return the hashtable pointer
};

uint64_t hash(const char *s) {   //Hashing function, takes a string and outputs a uint64_t hash value
   int length = strlen(s);       //Length of the string for looping
   uint64_t hashVal = 5381;      //Start the hashValue at 5381, cool lookin prime
   int i;                        //Variable for looping

   for (i = 0; i < length; i++) {         //For every character in the string
      hashVal += s[i] + (hashVal * 33);   //Add hashvalue to the digit + itself*33
   }

   return hashVal;               //The hashed Value gets returned from function
};