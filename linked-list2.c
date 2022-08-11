#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

struct node{
        int data;
        nodePtr next;
};

typedef struct node node;

int main(int argc, char *argv[])
{
        nodePtr first;

        first = malloc(sizeof(node));
        first->next = NULL;
        first->data=1;

        first->next = malloc(sizeof(node));
        first->next->data = 2;
        first->next->next=NULL;

        first->next->next = malloc(sizeof(node));
        first->next->next->next = NULL;
        first->next->next->data = 3;

        return (0);
}
