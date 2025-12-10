#include <stdio.h>

int main() {
    char *str = "Hi!";
    printf("%s\n", str);
    printf("%c\n", str[0]);

    char *p = &str[0];/// Correctly assign the address of the first character to p
    printf("%p\n", p);

    char *ptr = str; // Correctly assign str to ptr
    printf("%p\n", str);
    printf("%p\n", ptr);
    printf("%p\n", &str[0]); // points to 'H'
    printf("%c\n", str[0]); // prints 'H'

    printf("%p\n", &str[1]); // points to 'i'
    printf("%c\n", (str[2]));
    printf("%p\n", &str[2]);
    printf("%c\n", str[3]); // points to '\0', equals to 0 or null pointer or blank line
    printf("%p \n", &str[3]); // points to null terminator

    return 0;
}

// Explanation:
// char * is a pointer to first character of string literal "Hello!" 
// also, str is the address of the first character of the string literal.
// Therefore, &str[0] gives the address of the first character,
// which is the same as str itself.

// C lang do not have references like C++,no string references in C.
// so we use pointers to achieve similar functionality.