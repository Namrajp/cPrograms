#include <stdio.h>

typedef struct node {
    int number;
    struct node *next;
} 
node;

int main() 
{
    // List of size
    node *list = NULL;

    // Add a number to list
    node *t = malloc(sizeof(node));

    (*t).number = 1;
    (*t).next = NULL;
}