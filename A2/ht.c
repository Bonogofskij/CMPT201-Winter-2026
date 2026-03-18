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
//#include "findPrime.h"  //Boolean prime finder

struct ht {             //Basic node in our hashtable
   char * name;         //The name (or string) associated with the node
   uint64_t * value;    //The key for the hashtable given the name string
   struct ht * next;    //Pointer to the next node
};

uint64_t hash(const char *s) {
   int length = strlen(s);
   uint64_t hashVal = 0;
   int i;

   for (i = 0; i < length; i++) {
      hashVal += s[i];
   }
   return hashVal;
};