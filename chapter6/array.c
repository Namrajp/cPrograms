#include <stdio.h>

int main(void) {

  int prices[] = {3,5,7,9, 21,};

  for (int i = 0; i < 5; i++) {
    printf("Price list: %d\n", prices[i]);
  }
  // printf("Hello, World!\n");
//   prices.push(25); // Error: 'prices' is not a class, so it has no member 'push'
prices[0] = 25; // Valid: assigns 25 to the first element of the array
int length = sizeof(prices) / sizeof(prices[0]);
printf("Length of prices array: %d\n", length);
prices[length] = 890; // Valid: cannot push to array
for (int i = 0; i < length; i++) {
    printf("Updated Price list: %d\n", prices[i]);
    }
}
