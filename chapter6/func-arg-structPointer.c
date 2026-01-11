#include <stdio.h>
#include <stdlib.h>

// Define a struct
struct Person {
    char *name;
    int age;
};

// Function that takes a pointer to a struct
void updateAge(struct Person *p) {
    p->age += 1;   // Modify struct via pointer
}

int main() {

    // struct Person *ptr;

    struct Person *person1;
    person1  = malloc(sizeof(*person1));

    // struct Person person1 = {"Alice", 30};
    // person1 = {"Kevin", 50};
    person1->name = "Kevin";
    person1->age = 50;
    printf("Before: %s is %d years old\n", person1->name, person1->age);

    // Pass pointer to the struct
    updateAge(person1);

    printf("After:  %s is %d years old\n", person1->name, person1->age);

    free(person1);
    return 0;
}