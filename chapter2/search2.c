#include <stdio.h>
#include <string.h>

int search(int k[], int m);

int main(void) 
{
    int n[] = {3,5,6,7,9, '\0'}; 
    //n is an array of integers, stored in array memory as Ascii '51', '53' so on. 
    int result = search(n, 6); // searching for char '6' -> 54
    // return result;
    if (result != -1)
    {
        printf("Found at index %u\n", result);
    } else {
        printf("Not found");
    }
}

int search(int x[], int y)
{
    int low, mid, high;
    low = 0;
    high = 5;

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