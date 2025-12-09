#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *number;
    number =  malloc(3 * sizeof(int));
    // int number[3];

    if (number == NULL)
    {
        return 1;
    }

    number[0] = 1;
    number[1] = 2;
    number[2] =3;

    for (int i = 0; i < 3; i++) {
        printf("Numbers are: %i\n", number[i]);
    }

    free(number);
    return 0;
}