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

#ifndef _HT_IMPL_H_
#define _HT_IMPL_H_

int hash(const char *s, int capacity);

struct ht {                 //Struct of our hashtable
    struct node ** items;
    float capacity;           //How big the hashtable can be
    float slotsFull;          //How many slots of the table are occupied
};

struct node {               //Struct of each entry in our hashtable
    char *city;             //String of the city
    void *value;            //Postal code
};

void ht_free(hashtable ht);

void ht_remove(hashtable ht, const char *key);

void ht_resize(hashtable ht, float oldCapacity);     //Resizing function if table reaches >2/3 full

hashtable ht_create_size(float capacity);       //Creates a hashtable of a given float size

#endif
