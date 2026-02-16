/*------------------------------------------
Student’s Name:             June Bonogofski
Lab 4:                      lab4E1.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>                                          //For basic functionality, fgets(), fgetc(), printf(), etc.
#include <string.h>                                         //Needed for strlen()


int main() {                                                //Main function, expecting int 0 as return value
    
    char string[25];                                        //Initializing the string with a max length of 25

    printf("Enter a string (max length 25): ");             //Prompt user for a string, max length 25
    fgets(string, 25, stdin);                               //Store the users line of text as string

    printf("Enter a character: ");                          //Prompt user for a character
    char ch = fgetc(stdin);                                 //Stores the users char as ch

    int i, cntr = 0, pos = 0;                               /*Initializing iterating int (i), counter for counting occurances of ch in string (cntr),
                                                            and secondary int for looking through the string if we need to (pos)                        */

    for (i = 0; i < strlen(string); i++) {                  //Iterate through the string char by char, string[0] to string[sting length]       
        if (string[i] == ch) {                              //This loop runs when we need to alter the character out of our list
            cntr++;                                         //Advance the counter, we found a match
            
            while (string[pos] == ch) {                     //Looks through the list until we find a non ch character
                pos++;                                      //Advance through the list
            }    
        }

        string[i] = string[pos];                            //Replace the character at our current iteration position with one we've looked through the list for
        pos++;                                              //Advance the pos variable so we start looking at the next ch in line for the next loop
        
    }

    printf("The string: %s\nCharacter %c occured %i times.\n", string, ch, cntr);   //Prints output for user to examine

    return 0;                                               //Exits main function
}