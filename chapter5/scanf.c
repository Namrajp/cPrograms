#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int get_int(void);
float get_float(void);
char* get_string(void);

int main() {

	int number = get_int();
	printf("Your integer number is: %i\n", number);

	float decimal = get_float();
	printf("You decimal number is: %f\n", decimal);

	char *name = get_string();
	if (name != NULL) {
		printf("Hello, %s\n", name);
		printf("Your name is: %s\n", name);
		free(name);
	} else {
		return 1;
	}
	// free(s);
}

char* get_string(void) {
	int c; 
	int length = 0;
	int capacity = 16;
	char *s;
	s = malloc(40 * sizeof(char));
	if (s == NULL) {
		return NULL;
	}
	// printf("String: ");

	printf("What is your name? ");
	// scanf("%s\n", s);
	
	while ((c = getchar()) != '\n' && c != EOF)
	// && causes short circuiting if user press enter, exits loop
	{
		if (length +1 >= capacity)
		{
			capacity *= 2;
			char *new_buf = realloc(s, 16 * sizeof(char));
				if (new_buf == NULL) {
					free(s);
					return NULL;
					}
				s = new_buf;
				
				s[length++] = c;
		}
	}
	s[length] = '\0';
	return s;
 }
	// Ask user for integer input
int get_int(void) {
	int i;
	printf("Integer: ");
	scanf("%i", &i);
	return i;
}



float get_float(void) {
	float f;
	printf("Float number: ");
	scanf("%f", &f);
	return f;
}
// Ask user for string input

	// // free(s);
	// return s;
	
	// char s[100];

    // fgets(s, sizeof(s), stdin);

//    char s[4]; also works n memory in array.
// segmentation fault if no memory is allocated in char pointer.
// using malloc or array notation. 
/// top pointer points to memory allocated, scans
// stores value, print using top variable.