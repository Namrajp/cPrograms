#include <stdio.h>


/* count line in input */
int main(void) 
{
	int c, n1;
	
	n1 = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
		++n1;
	printf("%d\n", n1);   // In Linux EOF is CTRL - D 
}
