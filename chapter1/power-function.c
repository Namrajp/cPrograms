#include <stdio.h>
int power(int, int);

int main() 
{
    for (int i = 0; i < 10; i++)
        printf("2 and -3 to the power %d is %d and %d\n", i, power(2, i), power(-3, i));
    return 0;

}

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i <= exp; ++i)
        result *= base;
    return result;
}
