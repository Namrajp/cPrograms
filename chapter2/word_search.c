#include <stdio.h>
#include <string.h>

int search(char *words[], int count, char *target);

int main(void)
{
    // Sorted list of words
    char *words[] = {"apple", "banana", "cherry"};
    int count = 3;

    int result = search(words, count, "banana");

    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    return 0;
}

int search(char *words[], int count, char *target)
{
    int lower = 0;
    int upper = count - 1;

    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;

        int cmp = strcmp(target, words[mid]);

        if (cmp > 0)
            lower = mid + 1;
        else if (cmp < 0)
            upper = mid - 1;
        else
            return mid;   // found
    }

    return -1;            // not found
}