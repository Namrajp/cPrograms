#include <stdio.h>
int main(){
    char name[15];
        
    printf("Please enter your name\n");

    gets(name); // may overflow the bounds of the buffer 
    printf("Hello %s\n", name);
    return 0;
}


/***
 * https://www.google.com/search?q=how+to+use+fgets&oq=how+to+use+fgets&gs_lcrp=EgZjaHJvbWUyBggAEEUYOdIBCTYzNzRqMGoxNagCCLACAQ&sourceid=chrome&ie=UTF-8
 * * */

/**
 * The first internet worm (the Morris Internet Worm) escaped about 30 years
 *  ago (1988-11-02), and it used gets() and 
 * a buffer overflow as one of 
 * its methods of propagating from system to system. The basic problem 
 * is that the function doesn't know 
 * how big the buffer is, so it 
 * continues reading until it finds a newline or encounters EOF, and 
 * may overflow the bounds of the buffer it was given.

You should forget you ever heard that gets() existed.

Alternatives to gets()
As everyone else said, the canonical alternative to gets() is fgets() specifying stdin as the file stream.

c
char buffer[BUFSIZ];

while (fgets(buffer, sizeof(buffer), stdin) != 0)
{
    ...process line of data...
}
    The gets_s function

    // Source - https://stackoverflow.com/a/4309845
// Posted by Jonathan Leffler, modified by community. See post 'Timeline' for change history
// Retrieved 2025-12-01, License - CC BY-SA 4.0

#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
char *gets_s(char *s, rsize_t n);

**/