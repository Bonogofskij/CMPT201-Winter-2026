/*------------------------------------------
Student’s Name:             June Bonogofski
Lab #5                      dynamicArray.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "dynamicArray.h"

float * createArray(int size, float initialValue){
    int i;                                          //Looping variable
    float * myArray = malloc(sizeof(float) * size); //Create array int size

    for (i = 0; i < size; i++) {                    //Loop through for setting each variable to intialValue
        myArray[i] = initialValue;
    }

    return myArray;
}