#include <stdio.h>

int main(void) {
    int numbers[3];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;

    for (int i = 0; i < 3; i++) {
        printf(numbers[i]);
    }
};