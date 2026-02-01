#include <stdio.h>
#include <string.h>

void squeeze(char s[], int c);

int main(void)
{
    char r[] = "catisoutoncar";
   squeeze(r, 'c');

    for (int m = 0; m < strlen(r); m++)
    {
        printf("%c", r[m]);
    }
    printf("\n");
}

void squeeze(char x[], int y)
{
    int i, j;
    for( j=0, i = 0; x[i] != '\0'; i++)
    {
        if (x[i] != y)
        {
            x[j++] = x[i];
        }
    }
    x[j] = '\0';

}