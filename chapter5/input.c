#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// int get_int(void);
// float get_float(void);
char* get_string(void);

int main() {

	// int number = get_int();
	// printf("Your integer number is: %i\n", number);

	// float decimal = get_float();
	// printf("You decimal number is: %f\n", decimal);

	char *name = get_string();
	if (name != NULL) {
		printf("Hello, %s\n", name);
		printf("Your name is: %s\n", name);
		free(name);
    }
    else {
        return 1;
    }    
}

char* get_string(void) {
    char *s;
    int c , length = 0;
	s = malloc(40 * sizeof(char));
	if (s == NULL) {
		return NULL;
	}
	printf("What is your name? ");

    while ((c = getchar()) != '\n' && c != EOF)
    {
        s[length++] = c;
        // scanf("%s\n", s);
    }
    // int length = strlen(s);
    s[length] = '\0';
	return s;
}