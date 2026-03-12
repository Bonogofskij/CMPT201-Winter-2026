/* ht.c
 *
 * TODO: Provide a high-level description of what is contained
 * in this file.
 *
 * Author: June Bonogofski
 * Lab instructor: Dhara Wagh
 * Lecture instructor: Ardy
 */

#include <stdio.h>
#include <stdlib.h>
#include "ht.h"      /* Import the public hashtable header. */
#include "ht_impl.h" /* Also import the private header, just for us! */

struct ht {             //Basic node in our hashtable
   char * name;         //The name (or string) associated with the node
   uint64_t * value;    //The key for the hashtable given the name string
   struct ht * next;    //Pointer to the next node
};

hashtable ht_create(){
   struct ht * create;
   create = malloc(sizeof(struct ht));
   create->name = malloc(sizeof("June") + 1);
   return create;
}