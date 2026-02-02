/*  Lab 3 Price Summer
    June Bonogofski
    January 2026        */

#include <stdio.h>

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

    printf("\n\nItem\t\tTotal\t\tPurchase\nCount\t\tPrice\t\tDate\n");      //Prints title format (doesn't change)
    printf("%d\t\t$ %f\t%s: %s/%s\n", numItems, unitPrice*numItems, date, date, date);  //Prints variables matching format of title

}