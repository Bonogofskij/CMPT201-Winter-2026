/* ht_impl.h
 *
 * For any "private"  declarations that should not be visible to the public
 * users of the hash table, but might want to be shared across various source
 * files in the hash table implementation.
 * 
 * It is a common convention to append "_impl" to a private implementation of
 * some public interface, so we do so here.
 *
 * Author: June Bonogofski
 * Lab instructor: Dhara Wagh
 * Lecture instructor: Ardy
 */
#include <stdio.h>
#include <stdint.h>

#ifndef _HT_IMPL_H_
#define _HT_IMPL_H_

struct ht {             //Basic node in our hashtable
   char * name;         //The name (or string) associated with the node
   struct ht * next;    //Pointer to the next node
};

static uint64_t hash(int tableSize, const char *s) {
   uint64_t ret = 5381;
   char c;
   while ((c = *s++)) {
      ret = (unsigned char)(c) + (33 * ret);
   };
   return ret = ret % tableSize;
}

#endif
