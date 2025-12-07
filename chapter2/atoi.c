#include <stdio.h>
int atoi(char s[]);

int main() 
{
	printf("Integer constant value is: %d\n",atoi("897"));
	return 0;
}

int atoi(char mystr[])
{
	int i, n;

	n = 0;
	for (i = 0; mystr[i] >= '0' && mystr[i] <= '9';++i)
		n = 10 * n + (mystr[i] - '0');
	return n;
}
