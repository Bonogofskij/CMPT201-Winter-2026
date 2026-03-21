#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	testHTable.c
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "../ht.h"
#include "../ht_impl.h"

int main() {        //Main function, expects int 0 return
    hashtable create = ht_create();             //Create a hashtable called 'create'
    ht_insert(create, "New York", "123ABC");    //Insert "New York, 123ABC" into create

    return 0;       //Exits main func
}