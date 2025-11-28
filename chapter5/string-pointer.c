    #include <stdio.h>

    int main() {
        char myString[] = "Hello";
        char *ptrToString = myString;

// Print the string using the pointer
        printf("String: %s\n", ptrToString); // correct way
        printf("String: %c\n", *myString); // Print first character using array name
        //  printf("String: %s\n", (char *) *myString); // int size 10 cast to char*, a pointer // seg fault

        char *name = "World";
        printf("Name: %s\n", name);

        printf("Address of string: %p\n", (void *)ptrToString); // Cast to void* for %p
        printf("Address of string array: %p\n", (void *)myString); // Cast to void* for %p
        printf("First program %s %s\n", ptrToString, name); // correct way
        return 0;
    }