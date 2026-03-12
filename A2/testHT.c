/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #6               testHT.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ht.h"
#include "ht_impl.h"


int main() {
    uint64_t tester = hash(53, "Ardy");     
    printf("Ardy = %lu\n", tester);
    tester = hash(53, "Hanan");
    printf("Hanan = %lu\n", tester);
    tester = hash(53, "Dhara");
    printf("Dhara = %lu\n", tester);

    hashtable myHash = ht_create();
    myHash->name = malloc(sizeof("June"));

    return 0;
}