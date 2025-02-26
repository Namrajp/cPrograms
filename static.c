#include <stdio.h>

int incrementAge() {
    static int age; // age = 0 initially
    age++;
    return age;  // on func call on prints age
}

int incrementNS_Age() {
    int age = 0;
    age++;
    return age;
   }
   

int main(void) {
    int i = 0;  // not static variable inside main 
    while (i < 7){
        printf("\t Static age val: %d\n",incrementAge());  // increments age by  1
        i++; // loop progression while 6 times
    }

    int j = 0;
    do {
        printf("Non-Static age:\t %d\n\n\n",incrementNS_Age());  // increments age by  1
        j++;
    } 
    while (j < 7);
}
