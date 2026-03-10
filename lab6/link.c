/*------------------------------------------
Student’s Name:             June Bonogofski
Lab #6                      link.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/

#include <stdio.h>              //For printf()
#include "link.h"               //Helper file
#include <string.h>             //For strcpy(), strcmp()
#include <stdlib.h>             //For malloc(), free()

void printList(struct node * list){     //Iterates through a gived linked list and prints out the node->data string
    int count;                          //Initialize variable for tracking node #
    
    for (count = 1; list != NULL; count++, list = list->next)       //Loop through each node in llist
        printf("Element number: %d is %s \n", count, list->data);   //Print ->data value to stdout
}


struct node * createList(char * firstE){    //Creates a llist with the head node->data value given as a string
    struct node * create;                   //Create a new node
    
    create = malloc(sizeof(struct node));   //Allocate space for a node
    create->data = malloc(sizeof(firstE));  //Allocate space in the ->data variable for the string
    strcpy(create->data, firstE);           //Copy the input string to ->data
    create->next = NULL;                    //Only node, so ->next = NULL for now
    return create;                          //Return the llist
}

void addFront(char * element, struct node ** list){     //Add a node to the front of the llist
    struct node * newFront;                             //Create a new node
    
    newFront = malloc(sizeof(struct node));             //Allocate space for node
    newFront->data = malloc(strlen(element) + 1);       //Allocates space for string (# chars + null char)
    strcpy(newFront->data, element);                    //Copy input string to ->data
    newFront->next = *list;                             //This is the head, so it's ->next points to the old head node
    *list = newFront;                                   //Point the llist to the new head
}
void addRear(long * element, struct node ** list){      //Add a node to the end of the llist
    struct node * newRear;                              //Create a new node

    newRear = malloc(sizeof(struct node));              //Allocates space for new node
    newRear -> next = NULL;                             //Newnode is the end of llist, so ->next = NULL
    (*list) -> next = newRear;                          //Last node of the old llist points to our node
}


void deleteNode(char * element, struct node ** list){   //Deletes a node with ->data value of given string
    struct node * prev, *cur;                           //Create new nodes for iterating through llist
    
    prev = NULL;                                        //Set prev to NULL
    cur = *list;                                        //Set cur to head of given llist

    while (cur != NULL && (strcmp(element, cur->data) != 0)){   //While cur points to a valid node and given string doesnt match cur->data
        prev = cur;                 //We can advance prev as soon as we enter loop
        cur = cur->next;            //Make cur the next node in llist
    }
    if (cur==NULL) return;          //If we run out of nodes, exit
    if (prev==NULL)                 //This means we never entered while loop in the first place, no nodes = exit
        *list = cur->next;          //Set head of llist to cur->next
    else                        //We have prev and next nodes, so while loop found a match
        prev->next = cur->next;     //Assign prev->next to cur->next, bypassing cur
    if (cur->data != NULL)          //If the node has ->data 
        free(cur->data);            //Free it
    free(cur);                      //Free the deleted node
}

void destroy(struct node ** list){
    struct node * dest, * link;
    
    dest = *list;
    while (dest != NULL){
        if (dest->data != NULL)
            free(dest->data);
        free(dest);
        dest = link;
        if (link != NULL)
            link=link->next;
    }
    *list = NULL;
}
