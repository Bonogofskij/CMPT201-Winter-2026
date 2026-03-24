#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	findPrime.c
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

#include <math.h>       //For multiplication
#include "prime.h"  //Prototype

int isPrime(float f) {  //Given an int, returns 1 if int is a prime number, 0 otherwise
    int retVal = 1.00;
    
    if (f <= 1) {       //If i is one, 0, or negative
        retVal = 0;     //one isnt prime
    }

    int n;              //Looping variable

    for (n = 2.00; (n * n) <= f; n++) {    //Start from i = 2, we only need to check to sqrt(i) so this saves us computing time
        if (((int)f % n) == 0) {   //If it can be divided evenly by n
            retVal = 0;     //Cant be prime then
        }
    }

    return retVal;      //Return retVal (prime is 1, non-prime is 0)
}

float newPrime(float f) {
    float newSize = f * 2;
    while (isPrime(newSize) == 0) {
        newSize++;
    }

    return newSize;
}