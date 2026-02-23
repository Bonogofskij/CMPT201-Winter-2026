/*------------------------------------------
Student’s Name:             June Bonogofski
Assignment #1               squeeze.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>
#include <ctype.h>


int main() {                                    //Main function, expecting 0 as return value
    int nextCh = fgetc(stdin);                  //Tracks the next character to compare to the last
    int curCh = nextCh;                         //Will track the last character, but has to start off at the same beginning
    int count = 1, i;                           //Tracking varialbes for loops and repetition counts
    
    while ((nextCh = fgetc(stdin)) != EOF) {    //Runs until nextCh reaches the end of the file (ctrl+D)
        printf("curCh = %c, nextCh = %c\n", curCh, nextCh);
        
        if (nextCh == '\n') {  //Skips newline character
            printf("%c\n", curCh);              //Print the curCh before we change it past the newline
            nextCh = fgetc(stdin);              //Grab the next entry
        } else if (curCh == '\n') {
            fputc(curCh, stdout);
        } else if (nextCh == curCh) {           //If we have two repeated letters
            count += 1;                         //Count advances, as we need to see how many instances of the same char there are
            while ((nextCh = fgetc(stdin)) == curCh) {  //While the character AFTER nextCh is still the same as curCh
                count += 1;                     //Advance the count again
            }
            printf("%c%d", curCh, count);       //Print the character and the # of times we saw it
            count = 1;                          //Reset count to 1 for next time we need to use it
        } else {                                //Runs if nextCh != curCh
            if (isdigit(nextCh)) {              //If next char is a number
                for (i = 0; i < (int)nextCh; i++) {
                    printf("%c", curCh);        //Print out the curCh that number of times
                }
            } else {                            //If curCh and nextCh are both alpha and different from one another
                fputc(curCh, stdout);           //Then we have no reason not to output curCh
            }
        }
        curCh = nextCh;                         //Bring curCh up to date before nextCh gets new value  from while loop
    }

    return 0;                                   //Exits main
}