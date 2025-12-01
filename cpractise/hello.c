#include <stdio.h>
int main(){
    char name[15];
        
    printf("Please enter your name");

    scanf("%s", name);
    printf("Hello %s\n", name);
    return 0;
}