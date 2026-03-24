#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	pCode.c
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

#include <stdio.h>      //standard IO
#include <string.h>     //strcmp()
#include <stdbool.h>    //true/false
#include "ht.h"         //hashtable header public
#include "ht_impl.h"    //hashtable header private
#include "prime.h"      //for prime functions

int main(int narg, char* argArr[]) {    //Main function takes
    if (narg <= 1) {                    //If the number of arguements isnt 2
        fprintf(stderr, "Missing input argument!\n");   //Standard error message
        return 1;                       //Exit functions
    }

    FILE *file = fopen(argArr[1], "r"); //Open the file given for arg1
    char sLine[100];                    //pointer to read the line
    char *token;                        //token for splitting sLine
    char *cityPtr;                      //char pointer for city
    char *valPtr;                       //char pointer for value/pCode
    void *voidPtr;                      //void pointer to pass void *pcode to insert

    hashtable myTable = ht_create();    //Make a new hashtable called myTable

    while (feof(file) != true) {        //While there's still more file to read
        fgets(sLine, 100, file);        //Grab the first line and store it at sLine
        token = strtok(sLine, ",");     //tokenize string at comma
        cityPtr = token;                //first slot is city
        while (token != NULL) {         //If token != NULL, 
            token = strtok(NULL, ",");  //Get the next token on the sLine
        }

        valPtr = token;                 //Second token is pCode
        voidPtr = &valPtr;              //Cast it to void pointer for ht functions

        ht_insert(myTable, cityPtr, voidPtr);   //Insert the city and pCode in myTable
    }

    ht_print_dist(myTable);             //Show the table based on city

    return 0;                           //Exit main
}