#include <stdio.h>

int main(void) {
    const int SIZE = 5;
    int prices[SIZE];
    // int prices[SIZE] = {1,2,3,4,5}; Error: cannot initialize using variable size

    for (int i = 0; i < 5; i++) {
        prices[i] = i+2;
        printf("\tprices are listed: %d\n", prices[i]);
    }
}