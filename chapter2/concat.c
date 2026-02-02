#include <stdio.h>
#include <string.h>

void mystrcat(char m[], char n[]);

int main(void)
{
    char s[20] = "Hello ";
    char t[] = "Romeo";
    mystrcat(s,t);

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

void mystrcat(char x[], char y[])
{
    int i, j;
    i = j = 0;

    while(x[i] != '\0')
        i++;
    while ((x[i++] = y[j++]) != '\0') 
        ;
}