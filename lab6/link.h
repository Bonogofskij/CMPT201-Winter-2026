
//some basic linked-list functions
struct node {
    char * data;
    struct node * next;
};

void printList(struct node * list);

struct node * createList(char * firstE);

void addFront(char * element, struct node ** list);

void deleteNode(char * element, struct node ** list);

void destroy(struct node ** list);





