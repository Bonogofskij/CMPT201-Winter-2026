/*------------------------------------------
Student’s Name:             June Bonogofski
Lab #5                      lab5E2.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "stuff.h"

int main() {
    struct stuff * stuffArray = makeArray(4);   //Create a pointer to an array of size 4
    makeStuff("Salwa", stuffArray);             //Set struct values to Salwa
    makeStuff("Dhara", stuffArray);             //Set struct values to Dhara
    makeStuff("Abdullah", stuffArray);          //Set struct values to Abdullah
    makeStuff("YourName", stuffArray);          //Set struct values to YourName

    printStuff(stuffArray);                     //Prints name variable of structs in array

    freeStuff(4, stuffArray);                   //Frees array memory, as we're done using it

    return 0;                                   //Exits main
}