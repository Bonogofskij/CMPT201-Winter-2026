/*  Lab 3 - Lab3E3.c
    June Bonogofski
    CMPT 201 - X01L
    January 2026        */


#include <stdio.h>              //Needed for getc and ungetc
#include <math.h>

#include "change.h"

int main() {                    //Main function, expecting 0 as return value

    double owed, paid;              //We are reading doubles from changeCalculator, so we need to initialize a double
    char y;                     //Variable to sort through stdin

    y = getc(stdin);            //Assign y to the first character in stdin

    while(y=='\n') {            //If this char is the end of the line
        y = getc(stdin);        //Then we have our number from that line
    }

    while(y!=EOF) {             //If the character is NOT the end of the file char (CTRL+D)
        ungetc(y, stdin);       //Put y back into the stdin

        scanf("%lf %lf", &owed, &paid);
        changeCalculator(owed, paid);   //Call changeCalc function to run the math and output bill/coin totals
        
        y = getchar();          //Get a new character to advance while loop

        while(y == '\n') {      //Skip newline char
            y = getc(stdin);    //Grab the char after

        }
    }

    return 0;                   //Escape out of function
}