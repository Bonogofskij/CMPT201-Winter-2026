/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #1               countingCovid.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>                                          //For printf()
#include <string.h>                                         //For strtok()
#include <stdlib.h>                                         //For atoi()


int main() {                                                //Main function, expecting 0 as return value
    int dateArray[2][12][31];
    char buffer[100];                                       //For storing fgets return
    char *token, *date;                                            //For temp storing strtok() returns from buffer and date[] respectively

    fgets(buffer, sizeof(buffer), stdin);                   //Take first line so we skip header in the while loop

    while (fgets(buffer, sizeof(buffer), stdin)) {          //While we have a line to read
        token = strtok(buffer, ",");

        while ((token[0] == '"') || (token[3] == '"')) {
            token = strtok(NULL, ",");
        }

        date = token;                                  //We have the right position in the line, save it to a string

        

    }

    //Loop through 2d array and print date: num cases to stdin

    return 0;
}