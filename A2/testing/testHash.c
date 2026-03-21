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

int main() {                            //Main func, expecting 0
    uint64_t ret;                       //Initialize variable for hash func to return
    
    char * test1 = "January";           //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test1);
    printf("'January' hashes to %lu\n", ret);        

    char * test2 = "February";          //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test2);
    printf("'February' hashes to %lu\n", ret);        

    char * test3 = "March";             //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test3);
    printf("'March' hashes to %lu\n", ret);        

    char * test4 = "April";             //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test4);
    printf("'April' hashes to %lu\n", ret);        

    char * test5 = "May";               //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test5);
    printf("'May' hashes to %lu\n", ret);        

    char * test6 = "June";              //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test6);
    printf("'June' hashes to %lu\n", ret);        

    char * test7 = "July";              //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test7);
    printf("'July' hashes to %lu\n", ret);        

    char * test8 = "August";            //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test8);
    printf("'August' hashes to %lu\n", ret);        

    char * test9 = "September";         //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test9);
    printf("'September' hashes to %lu\n", ret);        

    char * test10 = "October";          //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test10);
    printf("'October' hashes to %lu\n", ret);        

    char * test11 = "November";          //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test11);
    printf("'November' hashes to %lu\n", ret);        

    char * test12 = "December";          //Takes a string and prints out a messgae showing its hashed value
    ret = hash(test12);
    printf("'December' hashes to %lu\n", ret);        
   
    return 0;
}