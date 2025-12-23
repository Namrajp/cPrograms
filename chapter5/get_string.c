#include <stdio.h>
#include <stdlib.h>

char *get_string(const char *prompt);
typedef char*  string;

int main(void) {
    string name = get_string("What is your name? ");
    printf("Hello, %s\n", name);
    return 0;
}

char* get_string(const char *prompt) 
{
    printf("%s\n",prompt);
    size_t n = 32;
    char *buffer = malloc(n);

    fgets(buffer, n, stdin);
    return buffer;
}