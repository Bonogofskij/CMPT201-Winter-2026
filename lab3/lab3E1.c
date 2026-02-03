/*  Lab 3 Price Summer
    June Bonogofski
    CMPT 201 - X01L
    January 2026        */

#include <stdio.h>                                      //Needed for printf, scanf, sscanf etc

int main() {                                            //Main function, expecting int 0 as ret value

    int numItems;                                       //Initializing variable
    printf("Enter number of items: ");                  //Printing text to user to inform them of expected input
    scanf("%d", &numItems);                             //Take user input, store memaddress of numItems

    float unitPrice;                                    //Initializing variable
    printf("Enter unit price: ");                       //Printing text to user to inform them of expected input
    scanf("%f", &unitPrice);                            //Take user input, store memadress of unitPrice

    char date[10];                                      //Initializing variable
    printf("Enter date (dd/mm/yyyy): ");                //Printing text to user to inform them of expected input
    scanf("%s", date);                                  //Take user input, store memadress of date
    
    int day, month, year;                               //Create int variables to store day, mon, year seperately
    sscanf(date, "%i/%i/%i", &day, &month, &year);      //Interpret the date string and assign the year, month and day to their own in variables

    printf("\nItem\tTotal\tPurchase\nCount\tPrice\tDate\n");                            //Prints title format (doesn't change)
    printf("%d\t$ %.2f\t%i: %i/%i\n", numItems, unitPrice*numItems, year, month, day);  //Prints variables matching format of title

}