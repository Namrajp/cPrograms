#include <stdio.h>
#include <stdlib.h>

struct {
    int len;
    char *str;
    } *p ;

int main(void) {
    p = malloc(sizeof(*p)); // allocate memory for the struct
    //  p = {6,"hello"};// invalid: p is a pointer to an unnamed struct type.
    // To use {6, "hello"}, you would need an actual struct object to assign to
    // struct point = {6,"hello"}; // invalid
    p->len = 6;
    p->str = "hello";   // means: (*p).str
    printf("string: %c \n", *p->str);
    printf("length:%d \n", p->len);  // means: (*p).len

    ++p -> len; // increments len before accessing len
    ++(p -> len); // increments len before accessing len
    // (++p)->len; // increments p before accessing len // invalid
    printf("length:%d \n", p->len);  // means: (*p).len

    free(p);
    return 0;
}