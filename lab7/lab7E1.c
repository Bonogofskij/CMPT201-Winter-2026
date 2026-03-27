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
game * gameNode(double price, char * title, unsigned int popularity) {
    game * node = malloc(sizeof(game));     //Allocate memory for the node
    node->price = price;                    //Set node->price to price
    strcpy(node->title, title);             //copy title to node->title
    node->popularity = popularity;          //Set node->popularity to popularity

    return node;       //Return pointer to the created node
};

//Compares game popularity based 
int compGamesByTitle(const void * a, const void * b) {
    return 0;
};

int compGamesByPrice(const void *a, const void * b) {
    return 0;
};

int main() {
    game *node1 = gameNode(22.79, "Opus Magnum", 1);
    game *node2 = gameNode(0.01, "Minecraft", 4);
    game *node3 = gameNode(14.99, "Trainz", 2);
    game *node4 = gameNode(0, "Code Combat", 3);
    game *node5 = gameNode(7.79, "Lemmings Revolution", 3);
    game *node6 = gameNode(64.96, "Warcraft", 1);

    static game * gameArray[6];
    
    gameArray[0] = node1;
    gameArray[1] = node2;
    gameArray[2] = node3;
    gameArray[3] = node4;
    gameArray[4] = node5;
    gameArray[5] = node6;

    printf("gameArray[0]\nPrice: %.2lf\nTitle: %s\nPopularity: %d\n\n", gameArray[0]->price, gameArray[0]->title, gameArray[0]->popularity);
    printf("gameArray[1]\nPrice: %.2lf\nTitle: %s\nPopularity: %d\n\n", gameArray[1]->price, gameArray[1]->title, gameArray[1]->popularity); 
    printf("gameArray[2]\nPrice: %.2lf\nTitle: %s\nPopularity: %d\n\n", gameArray[2]->price, gameArray[2]->title, gameArray[2]->popularity);
    printf("gameArray[3]\nPrice: %.2lf\nTitle: %s\nPopularity: %d\n\n", gameArray[3]->price, gameArray[3]->title, gameArray[3]->popularity);
    printf("gameArray[4]\nPrice: %.2lf\nTitle: %s\nPopularity: %d\n\n", gameArray[4]->price, gameArray[4]->title, gameArray[4]->popularity);
    printf("gameArray[5]\nPrice: %.2lf\nTitle: %s\nPopularity: %d\n\n", gameArray[5]->price, gameArray[5]->title, gameArray[5]->popularity);

    return 0;
}