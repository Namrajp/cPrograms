#include <stdio.h>

int main(void) {
  int price = 24;
  int newPrice = price;
  price = -33;
  printf("The product price is: \n");
  printf("%d\n", price ); /// %d type specifier for integer. -ve or +ve whole numbers
  printf("%02d\n", newPrice ); // not padded, value read from memory.
  printf("%02d\n", 5); // padded to two digits.
}

// % is used for format specifier like %02d inside string means add 0 before integer.
