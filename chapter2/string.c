#include <stdio.h>
#include <string.h>

int main(void) {
    // char myName[9];
    char myName[8] = {'N', 'a', 'w', 'a', 'r', 'a', 'j', '\0'};
    char name[8] = "Indira";
    char *sonName = "Nitin";

    printf("Names among us are: %s\t %s\t%s\n", myName, name, sonName);
    printf("Length of myName is: %i\n", strlen(myName));

    printf("Join of myName and Nitin is: %s\n", strcat(myName, sonName));
    // strcpy(myName, sonName);  // Segmentation fault as size of string donot match
    strcpy(myName, name);
    // printf("Copy of myName to Nitin is: %s", strcpy(myName, sonName));
    printf("my Name is: %s", myName);

}