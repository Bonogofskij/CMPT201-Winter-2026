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

static uint64_t hash(int tableSize, const char *s){   //Takes a string and hashes it, returning an uint64_t
   uint64_t ret = 5381;             //5381 is a placeholder for now, will need to dynamically update
   char c;                          //Char to sort through string
   while ((c = *s++)) {             //While there still is a char assigned to c
      ret = (unsigned char)(c) + (33 * ret);
   };
   return (ret % tableSize);
}

#endif
