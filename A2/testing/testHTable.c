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

int main() {        //Main function, expects int 0 return
    hashtable create = ht_create();                 //Create a hashtable called 'create'
    char *cPtr = "123ABC";
    ht_insert(create, "New York", cPtr);            //Insert "New York, 123ABC" into create
    int index = hash("New York", create->capacity);
    void *vPtr = ht_lookup(create, "New York");
    printf("ht_lookup returned pCode: %s\n", *((char**)vPtr));
    ht_print_dist(create);
    return 0;       //Exits main func
}