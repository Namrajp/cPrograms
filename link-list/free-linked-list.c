#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} 
node;

int main() 
{   
    // Size of the list 
    node *list = NULL;
    node *tmp = malloc(sizeof(node));

    if (tmp == NULL) {
        free(tmp);
        return 1;
    }
    // Add a number to list
    tmp->number = 1;
    tmp->next = NULL;

    list = tmp; 
    // copy address of t to list. so, list points first node.

    // Add another number to list, no need to redclare temp
    tmp = malloc(sizeof(node));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    tmp-> number = 2;
    tmp-> next = NULL;
    list->next = tmp;

    // Add a number to list
    tmp = malloc(sizeof(node));
    if (tmp == NULL)
    {
        free(list->next);
        free(list);
    }

    tmp-> number = 3;
    tmp-> next = NULL;
    list-> next -> next =  tmp;
    
    // Print numbers
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) 
    {
        printf("%i\n", tmp->number);
    }

    // free(list);
    while(list != NULL)
    {
        node *n = list->next;
        free(list);
        list = n;
    }
    return(0);
}