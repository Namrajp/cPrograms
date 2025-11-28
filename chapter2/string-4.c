#include <stdio.h>

    int main() {
        printf("What is your name?\n");

        char myname[100];
        fgets(myname, sizeof(myname), stdin);

        // Remove trailing newline if present
        myname[strcspn(myname, "\n")] = '\0';

        printf("You supplied your name: %s\n", myname);
        return 0;
    }