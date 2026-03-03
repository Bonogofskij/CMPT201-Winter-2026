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
    char *CSVTok, *dateTok, *date;                          //For temp storing strtok() returns from buffer and date[] respectively
    int i, y, m, d, year, month, day;                       //Variables for looping, and storing date separately

    fgets(buffer, sizeof(buffer), stdin);                   //Take first line so we skip header in the while loop

    while (fgets(buffer, sizeof(buffer), stdin)) {          //While we have a line to read
        CSVTok = strtok(buffer, ",");                       //Tokenize the line by commas

        while ((CSVTok[0] == '"') || (CSVTok[3] == '"')) {  //If the first or last character in the token == ", then its the first/second token and we dont want it
            CSVTok = strtok(NULL, ",");                     //Get the next token
        }

        date = CSVTok;                                      //We have the right position in the line, save it to a string
        i = 0;                                              //For tracking which token we're looking at
        dateTok = strtok(date, "/");                        //Get the first token, delim = /

        while (dateTok != NULL) {                           //Loops until we run out of tokens
            if (i == 0) {                                   //First entry is always year
                sscanf(dateTok, "%d", &year);
            } else if (i == 1) {                            //Second entry is always month
                sscanf(dateTok, "%d", &month);
            } else {                                        //Third entry is always day
                sscanf(dateTok, "%d", &day);
            }
            dateTok = strtok(NULL, "/");                    //Get the next token
            i++;                                            //Advance i with the loop
        }

        dateArray[year - 2020][month - 1][day - 1] += 1;    //Advance the variable at that date
        

    }

    for (y = 0; y < 2; y++) {                               //For every year
        for (m = 0; m < 12; m++) {                          //For every month
            for (d = 0; d < 31; d++) {                      //For every day
                if ((int)dateArray[y][m][d] > 0) {          //If we found a case when we filled the array
                    printf("%d-%d-%d\t%d\n", y + 2020, m + 1, d + 1, dateArray[y][m][d]);   //Print out the day
                }
            }
        }
    }    
    return 0;                                               //Exit main
}