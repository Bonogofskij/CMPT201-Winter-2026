#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	testHash.c
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

#include <stdio.h>          //Printf
#include <stdint.h>         //uint64_t
#include "../ht_impl.h"     //hashtable private header
#include "../ht.h"          //hashtable header

#define SIZE 31

int main() {                            //Main func, expecting 0
    uint64_t ret;                       //Initialize variable for hash func to return
    
    char * test1 = "January";           //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test1, SIZE);
    printf("'January' hashes to %lu\n", ret);        

    char * test2 = "February";          //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test2, SIZE);
    printf("'February' hashes to %lu\n", ret);        

    char * test3 = "March";             //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test3, SIZE);
    printf("'March' hashes to %lu\n", ret);        

    char * test4 = "April";             //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test4, SIZE);
    printf("'April' hashes to %lu\n", ret);        

    char * test5 = "May";               //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test5, SIZE);
    printf("'May' hashes to %lu\n", ret);        

    char * test6 = "June";              //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test6, SIZE);
    printf("'June' hashes to %lu\n", ret);        

    char * test7 = "July";              //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test7, SIZE);
    printf("'July' hashes to %lu\n", ret);        

    char * test8 = "August";            //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test8, SIZE);
    printf("'August' hashes to %lu\n", ret);        

    char * test9 = "September";         //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test9, SIZE);
    printf("'September' hashes to %lu\n", ret);        

    char * test10 = "October";          //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test10, SIZE);
    printf("'October' hashes to %lu\n", ret);        

    char * test11 = "November";          //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test11, SIZE);
    printf("'November' hashes to %lu\n", ret);        

    char * test12 = "December";          //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test12, SIZE);
    printf("'December' hashes to %lu\n", ret);        

    return 0;
}