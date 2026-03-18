#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	testHash.c
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

#include <stdio.h>
#include <stdint.h>
#include "../ht_impl.h"

int main() {
    uint64_t ret;
    
    char * test1 = "January";
    printf("Hashing %s\n", test1);
    ret = hash(test1);
    printf("Value: %lld", ret);

    return 0;
}