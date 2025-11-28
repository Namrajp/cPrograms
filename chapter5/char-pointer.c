    #include <stdio.h>

    int main() {
        char myChar = 'X';
        char *ptrToChar = &myChar;
        printf("Address of char: %p\n", (void *)ptrToChar); // Cast to void* for %p
        return 0;
    }