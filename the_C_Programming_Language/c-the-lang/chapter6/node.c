#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;

}
node;


int main(int argc, char *argv[]) {

    node *list = NULL;

    for (int i = 1; i < argc; i++ ) {
        int number = atoi(argv[i]);  // atoi() func converts any string to an integer.

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n-> number = number;
        n-> next = NULL;

        n-> next = list;
        list = n;
    }


    node *ptr = list; // using temp var prt for loop linked list to print
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;

    }

    ptr = list; // using same temp var declared before but set it to top of prepended list/ stack 
    while(ptr != NULL) 
    {
        node *next = ptr->next; // save next before free up ptr var
        free(ptr); /// free prepend node from memory and loop thru all nodes.
        ptr = next;
    }
}