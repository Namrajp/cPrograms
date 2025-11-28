#include <stdio.h>

struct person {
    char age;
    char *name;
    }
    ramesh
    , people[3];

  struct person ramesh = { 43,"Roger"};
  struct person people[] = {{ 43,"Roger"}, { 23,"Sam"}, { 34,"John"}  };

int main(void) {

    printf("It's my dog name! %s \n", ramesh.name);
    printf("It's my age %u \n", (unsigned int) ramesh.age);

    for(int i=0; i<3; i++) {
        printf("It's my people names! %p , %p, %p \n", people[i].name);
    }
}