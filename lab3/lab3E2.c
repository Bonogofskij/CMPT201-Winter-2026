/*  Lab 3 Change Calculator
    June Bonogofski
    CMPT 201 - X01L
    January 2026        */


#include <stdio.h>                              //Needed for printf and scanf
#include <math.h>                               //Needed for trunc


int main() {                                    //Main function expecting int 0  as return
    
    double owed;                                //Initialize a variable to hold the amount owed
    printf("Enter amount owed: ");              //Prompts user to enter a value
    scanf("%lf", &owed);                        //Take user input and assign it to owed

    double paid;                                //Initialize a variable to hold the amount paid
    printf("Enter amount paid: ");              //Prompts user to enter a value
    scanf("%lf", &paid);                        //Take user input and assign it to paid

    double changeTotal = paid - owed;           //Calculate the amount of change we need to give back, stays as double for rounding

    printf("\nOutput:\n\nChange of:\n");        //Prints text for user context

    if (changeTotal >= 50) {                    //Runs if the total needs $50 or more as change
        double x = changeTotal/50;              //Temporary variable before truncation
        int numFifty = trunc(x);                //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numFifty * 50);         //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i fifty-dollar bill\n", numFifty); //Returns text to the user indicating how many fifty-dollar bills they get
    }

    if (changeTotal >= 20) {                    //Runs if the total needs $20 or more as change
        double x = changeTotal/20;              //Temporary variable before truncation
        int numTwenty = trunc(x);               //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numTwenty * 20);        //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i twenty-dollar bill\n", numTwenty);   //Returns text to the user indicating how many twenty-dollar bills they get
    }

    if (changeTotal >= 10) {                    //Runs if the total needs $10 or more as change
        double x = changeTotal/10;              //Temporary variable before truncation
        int numTen = trunc(x);                  //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numTen * 10);           //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i ten-dollar bill\n", numTen); //Returns text to the user indicating how many ten-dollar bills they get
    }

    if (changeTotal >= 5) {                     //Runs if the total needs $5 or more as change
        double x = changeTotal/5;               //Temporary variable before truncation
        int numFive = trunc(x);                 //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numFive * 5);           //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i five-dollar bill\n", numFive);   //Returns text to the user indicating how many five-dollar bills they get
    }

    if (changeTotal >= 2) {                     //Runs if the total needs $2 or more as change
        double x = changeTotal/2;               //Temporary variable before truncation
        int numToonie = trunc(x);               //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numToonie * 2);         //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i two-dollar coin\n", numToonie);  //Returns text to the user indicating how many two-dollar coins they get
    }

    if (changeTotal >= 1) {                     //Runs if the total needs $1 or more as change
        double x = changeTotal;                 //Temporary variable before truncation
        int numLoonie = trunc(x);               //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= 1;                       //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i one-dollar coin\n", numLoonie);  //Returns text to the user indicating how many loonies they get
    }

    if (changeTotal >= 0.50) {                  //Runs if the total needs $0.50 or more as change
        double x = changeTotal/0.50;            //Temporary variable before truncation
        int numCentsFifty = trunc(x);           //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numCentsFifty * 0.50);  //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i fifty-cent coin\n", numCentsFifty);  //Returns text to the user indicating how many fifty-cent coins they get
    }

    if (changeTotal >= 0.25) {                  //Runs if the total needs $0.25 or more as change
        double x = changeTotal/0.25;            //Temporary variable before truncation
        int numQuarter = trunc(x);              //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numQuarter * 0.25);     //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i twentyfive-cent coin\n", numQuarter);    //Returns text to the user indicating how many quarters they get
    }

    if (changeTotal >= 0.10) {                  //Runs if the total needs $0.10 or more as change
        double x = changeTotal/0.10;            //Temporary variable before truncation
        int numDime = trunc(x);                 //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numDime * 0.10);        //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i dime\n", numDime);           //Returns text to the user indicating how many dimes they get
    }

    if (changeTotal >= 0.05) {                  //Runs if the total needs $0.05 or more as change
        double x = changeTotal/0.05;            //Temporary variable before truncation
        int numNickel = trunc(x);               //Truncates the number of bills/coins, as we can't return half a bill or coin as change
        changeTotal -= (numNickel * 0.05);      //Updates changeTotal to accurately calulate future bill and coin returns
        printf("%i nickel\n", numNickel);       //Returns text to the user indicating how many nickels they get
    }

    return 0;                                   //Exit the main function

}