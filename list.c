#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *list = malloc(3* sizeof(int));

    if (list == NULL) 
    {
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // ...other code to do something else
    
    int *tmp = realloc(list, 4 * sizeof(int)); // allows grow or shrink memory to new locationrealloc also do copy
    if (tmp == NULL)   // if memory is full or other programs wants to use memory-- check
    {       
        free(list);   // free memory used by list pointer
        return 1;
    }

    // for (int i = 0; i < 3; i++) {  //COPYING done by realloc so no required
    //     tmp[i] = list[i];
    // }

    list = tmp;  // Memory leak means if prematurely change value of list to new memory tmp of 4b original 3b is lost

    list[3] = 4;

    // free(list); // free old chunk of memory 12bytes NOT required realloc handles it
    for (int i = 0; i <= 3; i++) {
        printf("%i\n", list[i]);
    }

    free(list);  // free new memory 16 bytes created by temp to assign to list as a good citizen
    return 0; // explicityly return 0
} /// NEXT create own data structure using struct, a dot(.), ->,  and a star * on file list3.c