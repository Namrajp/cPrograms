#include <stdio.h>

size_t strlen(const char *s);

int main(void) 
{
	printf("Length: %lu\n",strlen("Hello World!"));
	return 0;
}

size_t strlen(const char *s)
{
    size_t len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}