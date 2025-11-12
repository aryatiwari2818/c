#include <stdio.h>

int main() {
    char haystack[] = "Hello world";
    char needle[] = "world";
    int i, j, found = 0;

    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0'; j++) {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Found at position %d\n", i);
    else
        printf("Not found\n");

    return 0;
}
