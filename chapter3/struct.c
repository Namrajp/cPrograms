#include <stdio.h>

struct person {
    int age;
    char *name;
    }
    flavio;
    // , people[3]
struct person flavio = { 34, "Roger"};

int main(void) {

printf("It's my dog name! %s \n", flavio.name);
printf("It's my age %u \n", flavio.age);

}