#/*------------------------------------------
#Student’s Name:             June Bonogofski
#Lab #6                      link.h
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD
#--------------------------------------------*/


//some basic linked-list functions
struct node {               //The basic node in our llist
    char * data;            //Data points to a string
    struct node * next;     //Pointer to next node in llist
};

void printList(struct node * list);     //Prints a lists ->data strings to stdout

struct node * createList(char * firstE);    //Given a string for the first element, creates a llist

void addFront(char * element, struct node ** list);     //Add a node struct to the beginning of llist, becoming the new head

void deleteNode(char * element, struct node ** list);   //Deletes a node with given ->data string from llist

void destroy(struct node ** list);  //Frees each node->data and node in llist





