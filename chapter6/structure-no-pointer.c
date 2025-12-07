#include <stdio.h>

struct point {
    int len;
    char *str;
};

int main(void) {
    struct point p = {6, "hello"};

    printf("string: %c\n", *p.str);
    printf("length: %d\n", p.len);

    return 0;
}
