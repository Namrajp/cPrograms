#include <stdio.h>
main()
{
	long nc;
	nc = 0;
	while((getchar()) != EOF)
		++nc;
		printf("Number of chars: %ld\n",nc);
}
