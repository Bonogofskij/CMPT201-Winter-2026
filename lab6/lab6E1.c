
#include "link.h"
#include <stdio.h>
#include <string.h>

int main(void){
    //test the linked list
    struct node * myList;
    char add[15]="apple";

    myList=createList(add);
    printList(myList);
    printf("\n");
    strcpy(add, "pear");
    addFront(add, &myList);
    strcpy(add, "grape");
    addFront(add, &myList);
    strcpy(add, "peach");
    addFront(add, &myList);
    strcpy(add, "orange");
    addFront(add, &myList);
    printList(myList);
    printf("\n");
    deleteNode("pear", &myList);
    deleteNode("orange", &myList);
    deleteNode("apple", &myList);
    printList(myList);
    printf("\n");
    destroy(&myList);
    printList(myList);
    return 0;
}

