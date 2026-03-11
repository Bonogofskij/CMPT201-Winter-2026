#/*------------------------------------------
#Student’s Name:             June Bonogofski
#Lab #6                      lab6E1.c
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD
#--------------------------------------------*/


#include "link.h"
#include <stdio.h>
#include <string.h>

int main(void){     //Main, expecting 0 as return
    //test the linked list
    struct node * myList;       //Create a pointer to a node called myList
    char add[15]="apple";       //Create a variable for apple, so we don't have to keep typing it

    myList=createList(add);     //Make myList the head of a llist
    printList(myList);          //Check the contents of the llist of 1
    printf("\n");               //Newline formatting
    strcpy(add, "pear");        //make add variable "pear"
    addFront(add, &myList);     //Make "pear" node the front of llist
    strcpy(add, "grape");       //Make add variable "grape"
    addFront(add, &myList);     //Make "grape" node the front of llist
    strcpy(add, "peach");       //Make add variable "peach"
    addFront(add, &myList);     //Make "peach" node the front of llist
    strcpy(add, "orange");      //Made add variable "orange"
    addFront(add, &myList);     //Make "orange" node the front of llist
    printList(myList);          //Print out the contents of ->data in llist
    printf("\n");               //Newline formatting
    deleteNode("pear", &myList);    //Delete "pear" node from myList
    deleteNode("orange", &myList);  //Delete "orange" node from myList
    deleteNode("apple", &myList);   //Delete "apple" node from myList
    printList(myList);          //Check myList to see if nodes were deleted
    printf("\n");               //Newline formatting
    destroy(&myList);           //Destroy myList and all its nodes and ->data
    printList(myList);          //Try to print llist to make sure its destroyed
    return 0;                   //Exit main function
}

