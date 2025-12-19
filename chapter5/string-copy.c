#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *s = malloc(11);
    // s = "HI!"; // need user input
    printf("Please enter a uppercase string: ");
    scanf("%s",s); // segmentation fault if no malloc or s[number]

    char *t = malloc(strlen(s) + 1); // need chunk of memory to copy
    // +1 for the null character
    
    for (int i = 0, n = strlen(s) + 1 ; i < n; i++) {
        t[i] = s[i];
    }

    if (t == NULL) {
        return 1; // if malloc fails to return memory
    }

    // strcpy(t, s);
    // if nothing returned in t
    // if (strlen(t) > 0){
    //     t[0] = tolower(t[0]);
    // }
    printf("%lu\n",  strlen(s));
    printf("s:%s \n", s);
    printf("t:%s \n", t);

    free(t);
    free(s);
};