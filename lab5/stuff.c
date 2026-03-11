/*------------------------------------------
Student’s Name:             June Bonogofski
Lab #5                      stuff.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stuff.h"


struct stuff {
    char * name;            //a C-string
    int length;             //the length of name
};

struct stuff * makeArray(int size) {
    struct stuff * myArray = malloc(sizeof(struct stuff) * size);   //Create a pointer to an array of 'stuff' structs of size 'int'

    return myArray;         //Return the array pointer
}

void makeStuff(char *data, struct stuff * entry) {                  //Fills struct with given name and length of name
    entry->name = malloc(sizeof(entry) * (strlen(data) + 1));       //Allocates the memory to hold our data
    entry->name = data;                                             //Assign data to name variable of struct
    entry->length = (strlen(data) + 1);                             //Assign strlen+1 to length variable of struct
}

void printStuff(struct stuff * entry) {                             //Print the contents of the struct array (name only)
    printf("%s\n", entry->name);                                    //Can call variable to print directly
}

void freeStuff(int size, struct stuff * myArray) {                  //Free memory of struct array once we're done
    free(myArray);  
}