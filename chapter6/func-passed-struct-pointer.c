#include <stdio.h>

// Define a struct
struct Person {
    char name[20];
    int age;
};

// Function that takes a pointer to a struct
void updateAge(struct Person *p) {
    p->age += 1;   // Modify struct via pointer
}

int main() {
    struct Person person1 = {"Subhadra", 40};

    printf("Before: %s is %d years old\n", person1.name, person1.age);

    // Pass pointer to the struct
    updateAge(&person1);

    printf("After:  %s is %d years old\n", person1.name, person1.age);

    return 0;
}