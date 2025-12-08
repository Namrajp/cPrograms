#include <stdio.h>
#include <stdlib.h>

int main() {

    char s[6];
    printf("s: ");
    scanf("%s", s);

    printf("s: %s\n", s);

}

//    char s[4]; also works n memory in array.
// segmentation fault if no memory is allocated in char pointer.
// using malloc or array notation.