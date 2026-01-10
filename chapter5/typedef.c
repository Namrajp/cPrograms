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

    Person person2;
    person2.name = "Nawaraj";
    person2.address = "123 main st, Sydney";
    
    printf("Name: %s\n", person2.name);
    printf("Address: %s\n", person2.address);
}

// Explanation:
// In this code, we define a typedef 'string' as a pointer to char.
// We then create a struct 'Person'  aka defined type Person,that uses this typedef keyword
// and name and address for its members.
// This allows us to easily manage string data within the struct.   