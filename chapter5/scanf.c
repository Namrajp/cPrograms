#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char s[6];
    printf("only a character integer please: ");

    do {
        scanf("%s", s);
    } while (!isdigit(*s)) ;
    
      
    

    printf("s: %s\n", s);

    char *top;
    top = malloc(6 * sizeof(char));
    printf("Please type top letter: ");
    scanf("%s", top);
    printf("%s\n", top);

    double *pi = malloc(sizeof(double));
    printf("what is value of pi: \n");

    scanf("%lf", pi);
    printf("%0.8lf\n", *pi);
    free(top);
}

//    char s[4]; also works n memory in array.
// segmentation fault if no memory is allocated in char pointer.
// using malloc or array notation. 
/// top pointer points to memory allocated, scans
// stores value, print using top variable.