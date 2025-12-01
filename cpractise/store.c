#include <stdio.h>
#include <stdlib.h>

struct store{
    int number;
};

int main(){
    struct store shop;
    char age[15];
        
    printf("Please enter your age\n");
    fgets(age, sizeof(age), stdin);  // fgets replace scanf("%s", &age);

    shop.number = atoi(age); // converts string of numbers or char array to integer


    printf("Hello .. , your age is: %d\n", shop.number);
    return 0;
}
