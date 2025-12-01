#include <stdio.h>
int main(){

    char name[15];
        
    printf("Please enter your name\n");
    fgets(name, sizeof(name), stdin);

    char str [15] = getch(name); //error: invalid initializer

    // char str[15] = getch(name); error: invalid initializer

    printf("Hello %s\n", str);
    return 0;
}