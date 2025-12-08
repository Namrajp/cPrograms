#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "World";

    // Using strstr to find the substring
    char *result = strstr(str1, str2);
    if (result) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}