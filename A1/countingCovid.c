/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #1               countingCovid.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>
#include <string.h>


int main() {

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), stdin)) {
        printf("%s", buffer);
        //separate with strtok()?

        //Split along commas

        //Save to 2d list[some number][7]

        //Find the YYYY/MM/DD in slot 2

        //Make 2d list[date range][2] sorted by [date][num cases]

        
    }

    //Loop through 2d array and print date: num cases to stdin

    return 0;
}