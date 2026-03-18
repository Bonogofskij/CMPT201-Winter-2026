#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	testFindPrime
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

#include <stdio.h>
#include <math.h>
#include "../findPrime.h"

int main() {
    int ret, test;
    
    test = 1;
    printf("Testing findPrime(%d)\n", test);
    ret = findPrime(test);
    if (ret == 0) {
        printf("%d is not prime!\n", test);
    } else {
        printf("%d is prime!\n", test);
    }

    test = 5;
    printf("Testing findPrime(%d), which should be prime\n", test);
    ret = findPrime(test);
    if (ret == 0) {
        printf("%d is not prime, somethings up!\n", test);
    } else {
        printf("%d is prime! (ret == 1)\n", test);
    }

    test = 21;
    printf("Testing findPrime(%d), which should not be prime\n", test);
    ret = findPrime(test);
    if (ret == 0) {
        printf("%d is not prime\n", test);
    } else {
        printf("%d is prime, something is up!\n", test);
    }

    test = 5381;
    printf("Testing findPrime(%d), which should be prime\n", test);
    ret = findPrime(test);
    if (ret == 0) {
        printf("%d is not prime, something is up!\n", test);
    } else {
        printf("%d is prime!\n", test);
    }

    return 0;
}