#include <stdio.h>

int main() 
{
    long double start;
    long double end;
    long double step;

    printf("Please enter start: ");
    scanf("%Lf", &start);

    printf("Please enter end: ");
    scanf("%Lf", &end);

    printf("Please enter step: ");
    scanf("%Lf", &step);

    while (start != end) {
        printf("%Lf\n", start);
        start += step;
    }

    return 0;
}

// 0.1 + 0.2 != 0.3 exactly