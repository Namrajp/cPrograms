#include <stdio.h>

main()
{
	int c;
	c = getchar(); /// get a character, ASCII value decimal value 'c-0' 
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
}
