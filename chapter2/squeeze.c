#include <stdio.h>
#include <string.h>

void squeeze(char s[], int t);

// programs to remove occur of c on array 
int main(void) 
{

    char a[] = "This is a test.";
    squeeze(a, 'i');
    for (int i = 0; i < strlen(a); i++)
    {

        printf("%c", a[i]);
    }
    printf("\n");
}

void squeeze(char m[], int n) 
{
    int i, j;
    for(i = 0, j = 0; m[i] != '\0'; i++ )
    {
        if (m[i] != n)
        {
            m[j++] = m[i];
        }
    }
    m[j] = '\0';
}






















































// void squeeze(char s[], int c);

// int main(void)
// {
//    char r[] = "catisoutoncar";
//    squeeze(r, 'o');

//     for (int m = 0; m < strlen(r); m++)
//     {
//         printf("%c", r[m]);
//     }
//     printf("\n");
// }

// void squeeze(char x[], int y)
// {
//     int i, j;
//     for( j=0, i = 0; x[i] != '\0'; i++)
//     {
//         if (x[i] != y)
//         {
//             x[j++] = x[i];
//         }
//     }
//     x[j] = '\0';

// }