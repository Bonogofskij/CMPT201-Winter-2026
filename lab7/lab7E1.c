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
    unsigned int popularity;    //int ranking how popular, scale 1-4
} game;     //Yay typedefs

//Make a 'game' struct with given values, and return a pointer to the struct
game gameNode(double price, char * title, unsigned int popularity) {
    game * node = malloc(sizeof(game));     //Allocate memory for the node
    node->price = price;                    //Set node->price to price
    strcpy(node->title, title);             //copy title to node->title
    node->popularity = popularity;          //Set node->popularity to popularity

    return *node;       //Return pointer to the created node
};

//Compares game popularity based 
int compGamesByTitle(const void * a, const void * b) {
    return 0;
};

int compGamesByPrice(const void *a, const void * b) {
    return 0;
};

int main() {
    game ** gameArray = malloc(sizeof(game));

    return 0;
}