#include <stdio.h>

int main() {
    FILE *file_ptr;
    char buffer[100];

    // Open a file for reading
    file_ptr = fopen("example.txt", "r"); 

    if (file_ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read lines from the file until EOF
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer); // Print each line
    }

    fclose(file_ptr); // Close the file
    return 0;
}

