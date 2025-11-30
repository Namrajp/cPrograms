#include <stdio.h>

struct person {
    char name[100];
    int age;
    } people[5];

int main(void) {

  struct person people[5] = {{"John", 32}, {"Jane", 28}, {"Doe", 45}, {"Alice", 30}, {"Bob", 25}};

  for (int i = 0; i < 5; i++) {
    printf("People list: Name:%12s \t Age: %d\n", people[i].name, people[i].age);
  }
  // printf("Hello, World!\n");

  struct person *p = people;
  p->age = 33; // modifies people[0].age
  (p + 1)->age = 29; // modifies people[1].age
  *(p + 2) = (struct person){"Smith", 46}; // modifies people[2]
  for (int i = 0; i < 5; i++) {
    printf("People list: Name:%12s \t Age: %d\n", people[i].name, people[i].age);
  }
}
