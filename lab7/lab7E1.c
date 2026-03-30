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
    double price;               //Cost
    char title[25];             //Game title
    unsigned int popularity: 3;    //int ranking how popular, scale 1-4
} game;     //Yay typedefs

//Make a 'game' struct with given values, and return a pointer to the struct
game * gameNode(double price, char * title, unsigned int popularity) {
    game * node = malloc(sizeof(game));     //Allocate memory for the node
    node->price = price;                    //Set node->price to price
    strcpy(node->title, title);             //copy title to node->title
    node->popularity = popularity;          //Set node->popularity to popularity

    return node;       //Return pointer to the created node
}

//Prints the given game array with table formatting
void printArray(game ** array) {            int i;      //Looping variable

    printf("%-10s%-24s%s\n", "Price", "Title", "Popularity");   //Column headers for user

    for (i = 0; i < 6; i++) {       //For each slot in the array
        //Print all its information
        printf("$%-9.2lf%-24s%u\n", array[i]->price, array[i]->title, array[i]->popularity);
    };
    printf("\n");   //Newline for formatting
}

//qsort argument to sort array by title member
int compGamesByTitle(const void * a, const void * b) {
    game *g1 = *(game**)a;      //Cast a as 'game' to a pointer, g1
    game *g2 = *(game**)b;      //Cast b as 'game' to a pointer, g2

    size_t length;
    if (strlen(g1->title) > strlen(g2->title)) {
        length = strlen(g1->title);
    } else {
        length = strlen(g2->title);
    }

    return strncmp(g1->title, g2->title, length);
}

//qsort argument to sort array by price member
int compGamesByPrice(const void * a, const void * b) { 
    game *g1 = *(game**)a;      //Cast a as 'game' to a pointer, g1
    game *g2 = *(game**)b;      //Cast b as 'game' to a pointer, g2

    return (int)((g1->price*100) - (g2->price*100));    //Return -1 if a cheaper than b, 0 if equal, etc
}

int main() {
    //Initialize all the nodes to match the given table
    game *node1 = gameNode(22.79, "Opus Magnum", 1);
    game *node2 = gameNode(0.01, "Minecraft", 4);
    game *node3 = gameNode(14.99, "Trainz", 2);
    game *node4 = gameNode(0, "Code Combat", 3);
    game *node5 = gameNode(7.79, "Lemmings Revolution", 3);
    game *node6 = gameNode(64.96, "Warcraft", 1);

    static game * gameArray[6];     //Initialize the array
    
    //Add all the nodes to the array
    gameArray[0] = node1;
    gameArray[1] = node2;
    gameArray[2] = node3;
    gameArray[3] = node4;
    gameArray[4] = node5;
    gameArray[5] = node6;

    //Print the starting array
    printf("\nThe original, unaltered array\n");    //Showing user the context of printArray
    printArray(gameArray);

    //Calculate the number of elements and qsort the array by price
    size_t numGames = sizeof(gameArray) / sizeof(gameArray[0]);
    qsort(gameArray, numGames, sizeof(gameArray[0]), compGamesByPrice);

    //Print array sorted by price (ascending)
    printf("The array when sorted by price\n");     //Showing user the context of printArray
    printArray(gameArray);

    qsort(gameArray, numGames, sizeof(gameArray[0]), compGamesByTitle);

    //Print array when sorted by title, alphabetically
    printf("The array sorted by title\n");          //Showing user the context of printArray
    printArray(gameArray);

    return 0;   //Exit main
}