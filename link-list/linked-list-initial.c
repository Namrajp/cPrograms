#include <stdio.h>

typedef struct node {
    int number;
    struct node *next;
} 
node;

int main() 
{
    node *list = NULL;

    /// Add a number to list
    node *t = malloc(sizeof(node));

    t->number = 1;
    t->next = NULL;

    // Update the list to point to new node
    list = t; 
    // by copy address of t to list. so, list points first node.
}