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

	char *str = get_string();
	printf("Your string is: %s\n", str);




    // char s[6];
    // printf("only a character integer please: ");

    // do {
    //     scanf("%s", s);
    // } while (!isdigit(*s)) ;
    
      


    // printf("s: %s\n", s);

    // char *top;
    // top = malloc(6 * sizeof(char));
    // printf("Please type top letter: ");
    // scanf("%s", top);
    // printf("%s\n", top);

    // double *pi = malloc(sizeof(double));
    // printf("what is value of pi: \n");

    // scanf("%lf", pi);
    // printf("%0.8lf\n", *pi);
    // free(top);
}

// Ask user for integer input
int get_int(void) {
	int i;
	printf("Integer: ");
	scanf("%i", &i);
	return i;
}

// char* get_string(void) {
// 	char *s;
// 	s = malloc(40 * sizeof(char));
// 	printf("String: ");
// 	scanf("%s\n", s);
// 	free(s);
// 	return s;
// }

float get_float(void) {
	float f;
	printf("Float number: ");
	scanf("%f", &f);
	return f;
}
// Ask user for string input



//    char s[4]; also works n memory in array.
// segmentation fault if no memory is allocated in char pointer.
// using malloc or array notation. 
/// top pointer points to memory allocated, scans
// stores value, print using top variable.