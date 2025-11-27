#include <stdio.h>

void swap(int x, int y) /* wrong */
{
	int temp;

	temp = x;
	x = y;
	y = temp;
	// printf("%d   %3d\n",x,y); %3d means 3 space or tab
	printf("Value of x: %d\n",x);
	printf("Value of y: %d\n",y);
}
	
int main(void)
{

	int a = 6;
	int b = 4;
	swap(a,b);
	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
	return 0;
}

