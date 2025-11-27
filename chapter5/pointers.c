#include <stdio.h>

int main(void) {

  int age;
  int *address = &age; // a pointer defined using * operator, & operator for address of memory location

  printf("%p\n", &age); // address to memory location of variable age

  *address = 37;
  printf("%u\n", *address); // pointer to value at memory address
}
