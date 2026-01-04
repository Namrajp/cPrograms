#include <stdio.h>

struct person {
    char age;
    char *name;
    }
    staff
    , people[3];

  struct person builders = { 36,"Ramesh"};
  struct person people[] = {{ 43,"Roger"}, { 23,"Sam"}, { 34,"John"}  };

int main(void) {

    printf("It's person type name member! %s \n", builders.name);
    printf("It's age %u \n", (unsigned int) builders.age);

    for(int i=0; i<3; i++) {
        printf("It's memory address of names! %p  \n", people[i].name);
        printf("It's my people names! %s  \n", people[i].name);

    }
}