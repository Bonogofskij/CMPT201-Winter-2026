/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #6               testNode.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "ht.h"
#include "ht_impl.h"
#include "ht.c"

int main() {            //Main func, expects 0 as return
    printf("Creating a node\n");
    struct ht * node;
    printf("Success!\n\nAllocating space for the node\n");
    node = malloc(sizeof(struct ht));
    printf("Success!\n\nAllocating space for node->name (will be 'June')\n");
    node->name = malloc(sizeof("June"));
    printf("Success!\nSetting name to 'June'\n");
    node->name = "June";

    printf("ht->name should be June\t ht->name: %s\n", node->name);
    return 0;           //Exit main func
}