/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #1               lab4E1.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>                          //Printf()
#include <stdlib.h>                         //free()
#include "dynamicArray.h"                   //Prototype for createArray()


int main() {
    int i;                                  //Looping variable
    float * arr1 = createArray(5, 2.0);     //CreateArray to make and fill a test array

    printf("For createArray(5, 2.00):\n");  //Show end user what we're printing
    for (i = 0; i < 5; i++) {               //Loop through array and print values
        printf("%.2f\n", arr1[i]);
    }

    free(arr1);                             //Since we don't need this array anymore, free the memory

    return 0;                               //Exit main by returning 0
}