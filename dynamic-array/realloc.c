#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *list;
    // dynamically allocate an array of size 3
    list =  malloc(3 * sizeof(int));
    // int list[3];

    if (list == NULL)
    {
        return 1;
    }
    // assign three numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] =3;
        
    printf("Before Expanding, calc Array size using malloc\n");

    for (int i = 0; i < 3; i++) {
        printf("lists are: %i\n", list[i]);
    }

    // Resize old array of size 5
    int *temp;
    temp = realloc(list, 5 * sizeof(int));

    if (temp == NULL)
    {   
        free(list);
        return 1;
    }

    // Add new numbers to new array
    temp[3] = 4;
    temp[4] = 5;

      // Remember new array
    list = temp;

    printf("After Expanding Array size in Heap\n");
    // Print new array
    for (int i = 0; i < 5; i++) {
        printf("lists are: %i\n", list[i]);
    }
    // Free new array
    free(list);
    return 0;
}