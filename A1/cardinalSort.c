/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #1               cardinalSort.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>                              //Needed for printf()


int main() {                                    //Main function, expecting 0 as return value (int)

    int ASCII[127] = {0};                       //Initialize an array with a slot for each ASCII value (int)
    char y;                                     //Initialize char to check characters from stdin

    y = getc(stdin);                            //Take the first char from stdin

    while(y=='\n') {                            //If that char is a new line char
        y = getc(stdin);                        //Get the next char after \n
    }

    while(y!=EOF) {                             //Runs as long as we don't find the EOF marker

        int tmp = y;                            //Change our char to its ASCII value

        ASCII[tmp] = (ASCII[tmp] + 1);          //Increment that value in out ASCII array by 1 (because we found 1 of that character)

        y = getchar();                          //get the next char

        while(y=='\n') {                        //This runs when a newline char is found, which means its the end of our current line and we need to sort
            int i;                              //Initialize int for looping through ASCII[]

            for (i = 33; i < 127; i++) {        //Look through all array entries from 33 (first actual ASCII character) to 127 (last value of standard ASCII)
                while (ASCII[i] > 0) {          //If the index is > 0, it means we found an iteration of that character in the line
                    char tmpChar = (char)i;     //convert the int back to its char
                    printf("%c", tmpChar);      //Print the char for the user (or to testing file, for this lab)
                    ASCII[i] -= 1;              //Subtract 1 from that array value, as we returned it in order
                }
            }

            printf("\n");                       //Newline char for formatting output

            for (i = 0; i < 128; i++) { 
                ASCII[i] = 0;                   //Reset ASCII array to 0's to prepare it for the next line
            }
            
            y = getc(stdin);                    //Get a new char for the while loop
        }
    }

    return 0;                                   //Exit main function

}