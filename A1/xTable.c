/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #1               xTable.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>                          //For printf()
#include <math.h>                           //For pow() and sqrt()
#define range 101                           //Always print and calc to same #, can define it

int main() {                                //Main function, expecting 0 as return value
    printf("+\t ");                         //+ in the top left corner
    
    double x, y, ans;                       //Initialize x and y values, as well as ans to save the solution to later

    for (x = 5; x < range; x += 5) {        //Print the top row from 5 - 100
        printf("%.0f \t", x);    
    }

    printf("\n");                           //First row of answers starts on the next line

    for (y = 5; y < range; y += 5) {        //For each value of y from 5 to 100, multiples of 5
        printf("%.0f \t", y);               //Print y to the left column first

        for (x = 5; x < range; x += 5) {    //For each value of x
            ans = (pow(x, 4) / pow(y, 4)) + sqrt(y);    //Calculate ((x^4)/(y^4)) + sqrt(y)
            if (ans >= 100000) {            //If answer > 6 digits and formatted .1f, it will mess up spacing
                printf("%.1f", ans);        //Don't tab, keeps things in line
            } else {
                printf("%.1f\t", ans);      //If ans is below 7 digits with .1f, print and tab it
            }
        }
        printf("\n");                       //Advance a line to run the loop on the next row
    }

    return 0;                               //Exit main
}