#include <stdio.h>

void swap(int *px, int *py) 
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
	printf("Value of x: %d\n",*px);
	printf("Value of y: %d\n",*py);
}
	
int main()
{
	int a = 6;
	int b = 4;
	printf("Value of a: %i Value of b: %i\n",a, b);
	swap(&a,&b);
	printf("Value of a: %i Value of b: %i\n",a, b);

	return 0;
}

