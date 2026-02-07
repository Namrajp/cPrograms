#include <stdio.h>
#include <string.h>

int search(char k[], char m);

int main(void) 
{
    char n[] = "45689"; 
    //n is a string for strlen.str coz ends in '\0', '4', '5', '6' are char bytes
    int result = search(n, '6'); // searching for char '5' -> 53
    // return result;
    if (result != -1)
    {
        printf("Found at index %u\n", result);
    } else {
        printf("Not found");
    }
}

int search(char x[], char y)
{
    int low, mid, high;
    low = 0;
    high = strlen(x) - 1;

    while (low <= high)
    {
        mid = (low + high) /2;
        if (y > x[mid]) {
            low = mid + 1;
        } 
        else if (y < x[mid]) {
            high = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

// echo $?  after ./a.out to find what is returned .
// 0 output means found , 255 means -1 unsigned int not found,
// 2 means index of found or mid.