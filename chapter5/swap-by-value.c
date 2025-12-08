#include <stdio.h>
void swap(int x, int y);

	
int main(void)
{

	int a = 6;
	int b = 4;

	printf("Value of a: %i Value of b: %i\n",a, b);

	swap(a,b);
	printf("Value of a: %i Value of b: %i\n",a, b);

	return 0;
}

void swap(int x, int y) /* wrong */
{

	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("Value of x: %i Value of y: %i\n",x, y);

}