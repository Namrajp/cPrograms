#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
        printf("%s ", *++argv);
    printf("\n");  
    return 0;
    // didnot find why output prints (null)  -- got it i = 0 in for loop gets null 

    // while(--argc > 0)
    //     printf("%s ", *++argv);

}