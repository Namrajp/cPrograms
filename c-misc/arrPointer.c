#include <stdio.h>

int main(void) {

	const int SIZE = 5;
	// int prices[SIZE];
	int prices[5] = {1,2,3,4,5};  /// prices is a pointer to 1st item of array;
	
	for (int i = 0; i <= 5; i++) {
        printf("Original Price prices[i] : %u \n", prices[i]);
		printf("Price of First Item is listed: %d \n", *prices);
        prices[i] = *prices + (i^2);
        printf("Prices after inflation is listed: %u \n\n\n", *(prices + i));
	}
	
}
