#include <stdio.h>

    int main() {
        printf("What is your name?\n");

        char *myname = malloc(100); 
        if (myname == NULL) {
            perror("malloc failed");
            return 1;
        }

        scanf("%99s", myname);

        printf("You supplied your name: %s\n", myname);

        free(myname);
        return 0;
    }