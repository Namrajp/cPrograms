#include <stdio.h>

int strlen(char mystr[]);
int main(void) 
{
	printf("Length: %d\n",strlen("Hello World!"));
	return 0;
}

int strlen(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return i;
}
