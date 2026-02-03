#include <stdio.h>
#include <string.h>

int search(char k[], char m);

int main(void) 
{
    char n[] = {1,2,3,4,5,'\0'}; 
    // conceptually not a string for strlen.str coz ends in '\0', 1,2,3 are numeric bytes
    int result = search(n, 2);
    return result;
   
}

int search(char x[], char y)
{
    int lower, mid, upper;
    lower = 0;
    int len = strlen(x);
    upper = len - 1 ;

    while (lower <= upper)
    {
        mid = (lower + upper) /2;
        if (y > x[mid]) {
            lower = mid + 1;
        } 
        else if (y < x[mid]) {
            upper = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

// echo $?  after ./a.out to find what is returned .