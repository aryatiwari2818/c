#include <stdio.h>
#include <string.h>

int main() {

    char chars[] = {'a','a','b','b','c','c','c'};
    int n = sizeof(chars);

    int write = 0;
    int i = 0;

    while (i < n) {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch) {
            i++;
            count++;
        }

        chars[write++] = ch;

        if (count > 1) {
            char buf[10];
            int len = sprintf(buf, "%d", count);

            for (int k = 0; k < len; k++)
                chars[write++] = buf[k];
        }
    }

    // print compressed result
    for (int k = 0; k < write; k++)
        printf("%c ", chars[k]);

    return 0;
}
