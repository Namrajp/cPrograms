
#include <stdio.h>
#include <ctype.h>

/* functions */
double atof(char []);

/* atof: convert string s to double */
double atof(char s[])
{
	int i, sign;
	double val, power;

	for (i = 0; isspace(s[i]); ++i)           /* skip whitespace */
		;

	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		++i;
	
	for (val = 0.0; isdigit(s[i]); ++i)
		val = 10.0 * val + (s[i] - '0');
	
	if (s[i] == '.')
		++i;

	for (power = 1.0; isdigit(s[i]); ++i) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	return sign * val / power;
}

int main(void)
{
	char number[]  = "   -123.45";
	char number2[]  = "12  3.45  ";


	printf("%f\n", atof(number));
	printf("%f\n", atof(number2));

	return 0;
}
