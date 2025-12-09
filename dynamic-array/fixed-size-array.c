#include <stdio.h>

int main() 
{
    int number[3];

    number[0] = 1;
    number[1] = 2;
    number[2] = 3;
    // number[4] = 4; // stack overflow

    for (int i = 0; i < 3; i++) {
        printf("numbers are: %i\n", number[i]);
    }
    return 0;
}