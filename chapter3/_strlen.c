#include <stdio.h>

size_t strlen(const char *s);  // size_t is type long unsigned integer

int main(void) 
{
	printf("Length: %lu\n",strlen("Hello World!"));
	return 0;
}

size_t strlen(const char *s) // const declares argument to strlen being constant and string.
{
    size_t len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}