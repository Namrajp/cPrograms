#include <stdio.h>
#include <string.h>

int main(void) {

    char *name = "Nawaraj";
    for (int i = 0; i < 10; i++) {
        printf("i Value %d\n", i);
        if (i == 4 && name == "Nawaraj"){
            printf("Value of i is: %u and name is : %s", i, name);
            break;
        }
    }

}