#include <stdio.h>

int incrementAge() {
  static int age = 25; // static retains value of age and initialize to zero.
  age++;
  //printf("%d", age);
  return age;
}

int main(void) {
  char name[20];
  printf("What is your name?\n");
  scanf("%s", name); // string name is pointer to first char
  printf("Hello! %s\n", name);

  printf("What is your age?\n");
  // string name is pointer to first char, so input scanf donot need & before name.

  int age;
  scanf("%d", &age); // & is used before age, to store value in memory location.
  printf("%s , You are %d years old .\n", name, age);

  printf("Age increased to : %d\n", incrementAge() );
  return 0;
}
