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
#include "../ht.h"

int main() {
    uint64_t ret;
    
    char * test1 = "January";
    printf("Hashing %s\n", test1);
    ret = hash(test1);
    printf("Value: %lu\n", ret);

    char * test2 = "February";
    printf("Hashing %s\n", test2);
    ret = hash(test2);
    printf("Value: %lu\n", ret);

    char * test3 = "March";
    printf("Hashing %s\n", test3);
    ret = hash(test3);
    printf("Value: %lu\n", ret);

  return 0;
}