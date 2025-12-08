#include <stdio.h>

int main() {

    typedef char* string; // Define StringPtr as a pointer to char
    typedef struct {
        string name;
        string address;
    } Person;

    Person person1;
    person1.name = "Alice";
    person1.address = "123 Main St";

    printf("Name: %s\n", person1.name);
    printf("Address: %s\n", person1.address);
}

// Explanation:
// In this code, we define a typedef 'string' as a pointer to char.
// We then create a struct 'Person' that uses this typedef for its members.
// This allows us to easily manage string data within the struct.   