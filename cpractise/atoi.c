#include <stdio.h>
#include <stdlib.h>

int main(){
    char age[5];
        
    printf("Please enter your age\n");

    fgets(age, sizeof(age), stdin); // gets(age) is dangerous as it may overflow the bounds of the buffer 
    
    int num_age = atoi(age);
    printf("You are %d years old.\n", num_age);
    return 0;
}
