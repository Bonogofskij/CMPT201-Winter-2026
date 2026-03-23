#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	testHTable.c
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "../ht.h"
#include "../ht_impl.h"
#include "../findPrime.h"

int main() {        //Main function, expects int 0 return
    hashtable create = ht_create();                 //Create a hashtable called 'create'
    char *cPtr = "123ABC";
    ht_insert(create, "New York", cPtr);            //Insert "New York, 123ABC" into create
    
    int index = hash("New York", create->capacity);
    printf("New York hashes to: %d\n", index);
    
    void *vPtr = ht_lookup(create, "New York");
    printf("ht_lookup returned pCode: %s\n", *((char**)vPtr));

    ht_print_dist(create);
    
    printf("\nNow let's try adding a new node\n");
    cPtr = "567DEF";
    ht_insert(create, "California", cPtr);

    index = hash("California", create->capacity);
    printf("California hashes to: %d\n", index);
    
    vPtr = ht_lookup(create, "California");
    printf("ht_lookup returned pCode: %s\n", *((char**)vPtr));

    printf("Now there should be 2 nodes\n");
    ht_print_dist(create);

    printf("Let's add some more to trigger a resize\n");

    cPtr = "pCode3";
    ht_insert(create, "Oregon", cPtr);
    cPtr = "pCode4";
    ht_insert(create, "Maine", cPtr);
    cPtr = "pCode5";
    ht_insert(create, "Georgia", cPtr);



    return 0;       //Exits main func
}