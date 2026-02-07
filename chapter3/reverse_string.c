#include <stdio.h>
#include <string.h>

void reverse(char a[]);

int main(void)
{
    char s[] = "hello";
    reverse(s);
    printf("%s\n", s);
    return 0;
}

void reverse(char p[])
{
    int i, j, c;
    for (i = 0, j = strlen(p) - 1; i < j ;i++,  j--)
    {
        c = p[i];
        p[i] = p[j];
        p[j] =c;
    }
}