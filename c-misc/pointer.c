#include <stdio.h>

int main(void) {
    int age = 41;
    printf("My age is : %u \n", age);

    int *address = &age; //delcaring a pointer to an iteger value at address &xyz
    printf("My age memory address is : %p \n", &age);
    printf("My age container address value as a pointer : %p \n", address);
    printf("My pointer to an integer value as a age : %u \n", *address);

}