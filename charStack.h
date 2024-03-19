#include <stdlib.h>
#include <stdio.h>

typedef struct node node;
struct node{
    char *operation;
    int priority;
    node *prev;  
};

node *init(char *operation, int priority);
node *pop(node **top);
void push(node **top, node *toAdd);
void pushContent(node **top, char *operatiom, int priority);
void deleteStack(node *top);
void showStack(node *top);