/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #1
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>
#include <string.h>


int main() {

    char string[127];
    char y;

    y = getc(stdin);

    while(y=='\n') {
        y = getc(stdin);
    }

    while(y!=EOF) {
        
    }

    printf("%s", string);

    return 0;

}