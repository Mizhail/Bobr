#include "charStack.h"

node *init(char *operation, int priority){
    node *new = malloc(sizeof(node));
    new -> operation = operation;
    new -> priority = priority;
    new -> prev = NULL;
    return new;
}

node *pop(node **top){
    node *removed = *top;
    *top = (*top) -> prev;
    return removed;
}

void push(node **top, node *toAdd){
    toAdd -> prev = *top;
    *top = toAdd;
}

void pushContent(node **top, char *operation, int priority){
    node *toAddNode = init(operation, priority);
    toAddNode -> prev = *top;
    *top = toAddNode;
}

void deleteStack(node **top){
    node *slider = *top;
    while(slider -> prev != NULL){
        slider = slider -> prev;
        free(*top);
        *top = slider;
    }
    free(slider);
}

void showStack(node **top){
    node *slider = *top;
    while(slider -> priority != -1){
        printf("OPERATION:: \"%s\"  PRIORITY:: %d\n", slider -> operation, slider -> priority);
        slider = slider -> prev;
    }
}