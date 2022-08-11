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
        nodePtr head, temp, newNode = NULL;
        
        temp = malloc(sizeof(node));
        if (temp == NULL)
        {
                free(temp);
                return (1);
        }
        temp->next = NULL;
        temp->data = 1;

        head = temp;
        /* printf("head : %p\n", head); */
        /* printf("temp : %p\n", temp); */

        newNode = malloc(sizeof(node));
        if (newNode == NULL)
        {
                free(newNode);
                return (1);
        }
        newNode->data = 2;
        newNode->next = NULL;
        head->next = newNode;
        temp = newNode;

        newNode = malloc(sizeof(node));
        if (newNode == NULL)
        {
                free(newNode);
                return (1);
        }
        newNode->data = 3;
        newNode->next= NULL;
        temp->next = newNode;
        temp = newNode;

        for (temp = head; temp != NULL; temp = temp -> next)
        {
                printf("%i\n", temp->data);
        }

        while(head != NULL)
        {
                temp = head->next;
                free(head);
                head = temp;
        }

        return (0);
}
