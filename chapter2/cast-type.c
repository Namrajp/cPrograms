#include <stdio.h>

struct person {
    char age;
    char *name;
    };
   
  struct person ramesh = { 43,"Roger"};

int main(void) {

    printf("It's my dog name! %s \n", ramesh.name);
    printf("It's my age %u \n", (unsigned int) ramesh.age);

}