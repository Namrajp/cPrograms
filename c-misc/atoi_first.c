#include <stdio.h>

int atoi(char s[])
{
	int i, n;
	
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i]-'0');
	return n;
	// printf("%d\n", n);
}
	
	char letters[10] = {'a','b','c','d','e','f','g','h','i','j'};

int main(void) 
{
	// for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		// printf("%d \n", atoi(letters));
		atoi(letters);
}
