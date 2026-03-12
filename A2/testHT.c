/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #6               testHT.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "ht.h"
#include "ht_impl.h"
#include "ht.c"


int main() {
    uint64_t tester = hash(53, "June");
    printf("%lu\n", tester);
    return 0;
}