#include <stdio.h>
int atoi(char s[]);

char* main() 
{
    char str[] = "Hello World! THIS is C Programming.";
    // char output [100] = lower(str);
	// printf("Integer constant value is: %s",lower(str));
	return lower_s(str);
}

int lower_s(char mystr[])
{
	int i, n;
    char result[100];
	n = 0;
	for (i = 0; ;++i)
		if (mystr[i] >= 'A' && mystr[i] <= 'Z')
            result[i] = mystr[i] + ('a' - 'A');
        else if (mystr[i] == '\0') {
            result[i] = '\0';
            break;
        }
        else
            result[i] = mystr[i];
    printf("Lowercase string is: %s\n", result);    

	return 0;
}
