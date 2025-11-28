    #include <stdio.h>

    int main() {
        char myString[] = "Hello";
        char *ptrToString = myString;

        // Print the string using the pointer
        printf("String: %s\n", ptrToString); // correct way

        char *lastWord = "World";
        printf("Name: %s\n", lastWord);

        printf("My first program in C lang: %s %s\n", ptrToString, lastWord); // correct way
        printf("String: %c\n", *myString); // Print first character using array name

        printf("What is your name?\n");
        char *myname;
        scanf("%99s", myname); //unsafe, string name is pointer to first char // but uninitialized pointer // seg fault
        printf("You supplied your name: %s\n", myname);

        char address[10]; // myname is actual memory, not an uninitialized pointer
        printf("What is your address?\n");
        scanf("%9s", address);
        printf("You supplied your address: %s\n", address);
        return 0;
    }