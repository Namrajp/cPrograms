#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int c,nl,nw,nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF){
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("Number of lines, words and characters: %d %d %d\n",nl,nw,nc);
}
/*
typing start t
typing end ctrl-d (twice) command to end input
Output:
Number of lines, words and characters: 1 2 12

explanation: or debugging purpose
When you type 't' followed by a space and then press Ctrl-D (EOF), the

typing start t
nc = 1 // ++nc;
first if skipped
second if skipped
else if executed
nw = 1 state = IN;
typing end space

When you type 't' followed by a space and then press Ctrl-D (EOF), the

typing start t
nc = 1
first if skipped
second if skipped
else if executed
nw = 1 step state = IN;
typing end space
*/
