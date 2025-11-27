#include <stdio.h>
void main()
 {
    int c;	/* c is declared type int as it must be big enough to hold EOF and any char returned  by getchar(), EOF is int */
    c = getchar();
    while ((c != EOF))
    {
	putchar(c);
	c = getchar();
    }
}
