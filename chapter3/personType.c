#include <stdio.h>
#include <string.h>

int main(void) {

    typedef struct 
    {
        // string name;
        // string age;
        char *name;
        char *age;
    }
    person;

    person namraj = { "Namraj Pudasaini", "40" };
    printf("It's my dog name! %s \n", namraj.name);
    printf("It's my age %u \n", (unsigned int) namraj.age);
}