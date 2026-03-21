#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	findPrime.c
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

#include <math.h>       //For multiplication
#include "findPrime.h"  //Prototype

int findPrime(int i) {  //Given an int, returns true if int is a prime number, false otherwise
    int retVal = 1;
    
    if (i <= 1) {       //If i is one, 0, or negative
        retVal = 0;     //one isnt prime
    }

    int n;              //Looping variable

    for (n = 2; (n * n) <= i; n++) {    //Start from i = 2, we only need to check to sqrt(i) so this saves us computing time
        if (i % n == 0) {   //If it can be divided evenly by n
            retVal = 0;     //Cant be prime then
        }
    }

    return retVal;      //Return retVal (prime is 1, non-prime is 0)
}