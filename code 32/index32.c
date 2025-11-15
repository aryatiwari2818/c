#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abcabcbb";
    int last[256], i, left = 0, max = 0;
    for(i = 0; i < 256; i++) last[i] = -1;

    for(i = 0; s[i]; i++) {
        if(last[(int)s[i]] >= left) left = last[(int)s[i]] + 1;
        last[(int)s[i]] = i;
        if(i - left + 1 > max) max = i - left + 1;
    }

    printf("%d", max);
}
