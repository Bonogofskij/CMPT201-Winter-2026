/*------------------------------------------
Student’s Name:             June Bonogofski
Lab #6                      lab7E1.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Struct to hold information about each individual game
typedef struct {
    double price;                   //Cost
    char title[25];                 //Game title
    unsigned int popularity: 3;     //int ranking how popular, scale 1-4
} game;     //Yay typedefs

//Prints the given game array with table formatting
void printArray(game * array) {            
    int i;      //Looping variable
    printf("%-10s%-24s%s\n", "Price", "Title", "Popularity");   //Column headers for user

    for (i = 0; i < 6; i++) {       //For each slot in the array
        //Print all its information
        printf("$%-9.2lf%-24s%u\n", array[i].price, array[i].title, array[i].popularity);    
    };
    printf("\n\n");   //Newline for formatting
}

//qsort argument to sort array by title member
int compGamesByTitle(const void * a, const void * b) {
    game *g1 = (game*)a;      //Cast a as 'game' to a pointer, g1
    game *g2 = (game*)b;      //Cast b as 'game' to a pointer, g2

    //Initialize length to store value of longest string length
    size_t length;
    //str1 longer than s2, strlen(str1) = length
    if (strlen(g1->title) > strlen(g2->title)) {
        length = strlen(g1->title);
    } else {
    //str2 longer tha or equal to str1, strlen(str2) = length
        length = strlen(g2->title);
    }

    return strncmp(g1->title, g2->title, length);
}

//qsort argument to sort array by price member
int compGamesByPrice(const void * a, const void * b) { 
    game *g1 = (game *)a;      //Cast a as 'game' to a pointer, g1
    game *g2 = (game *)b;      //Cast b as 'game' to a pointer, g2
    
    //Return the diff in price for qsort
    return (int)((g1->price*100) - (g2->price*100));    
}

//Write the array of games to a binary file called out.bin
void writeBinary(game * array) {
    FILE *fp;           //Initialize a file pointer
    fp = fopen("out.bin", "wb");    //Open / overwrite 'out.bin' in write-binary mode

    //Error handling if the file cannot be opened/created
    if (fp == NULL) {       //No file pointer means file not open
        fprintf(stderr, "Could not open / create 'out.bin'\n");
        return;     //Return to escape function
    }

    //Write contents of array to out.bin in binary
    size_t n = fwrite(array, sizeof(game), 6, fp);
    
    //Make sure we wrote 6 items to out.bin
    if (n != 6) {
        //Standard error message with context
        fprintf(stderr, "An error occured when writing to out.bin!\n");
        return;
    }

    //Close the file
    fclose(fp);
};

//Read the binary file created by writeBinary back into a new array
void readBinary(game * array) {
    FILE *fp;       //Initialize file pointer
    fp = fopen("out.bin", "rb");

    //Error check the opening process, print error and exit if file not opened
    if (fp == NULL) {
        fprintf(stderr, "Could not open out.in\n");
        return NULL;    //Exit func early
    }

    //Read out.bin to the array given
    size_t length = fread(array, sizeof(game), 6, fp);

    //Make sure we read 6 items, no more no less
    if (length != 6) {
        //Standard error with some context if reading failed
        fprintf(stderr, "Error occured when reading out.bin!\n");
        return;
    }

    //Close the file
    fclose(fp);
}


int main() {
    //Initialize all the nodes to match the given table   
    static game gameArray[6] = {
        {22.79, "Opus Magnum", 1},
        {0.01, "Minecraft", 4},
        {14.99, "Trainz", 2},
        {0, "Code Combat", 3},
        {7.79, "Lemmings Revolution", 3},
        {64.96, "Warcraft", 1}
    };

    //Print the starting array
    printf("\nThe original, unaltered array\n");    //Showing user the context of printArray
    printArray(gameArray);

    //Calculate the number of elements and qsort the array by price
    size_t numGames = sizeof(gameArray) / sizeof(gameArray[0]);
    qsort(gameArray, numGames, sizeof(game), compGamesByPrice);

    //Print array sorted by price (ascending)
    printf("The array when sorted by price\n");     //Showing user the context of printArray
    printArray(gameArray);

    qsort(gameArray, numGames, sizeof(gameArray[0]), compGamesByTitle);

    //Print array when sorted by title, alphabetically
    printf("The array sorted by title\n");          //Showing user the context of printArray
    printArray(gameArray);

    //Write the array to binary file out.bin
    writeBinary(gameArray);

    //Make a new array to store the output of out.bin
    game newArray[6];
    readBinary(newArray);

    //Print newArray, which should contain the information we read from readBinary
    printf("The new array we got from out.bin\n");
    printArray(newArray);

    return 0;   //Exit main
}