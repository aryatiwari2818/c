#include <stdio.h>

int isSubsequence(const char *s, const char *t) {
    int i = 0, j = 0;

    while (s[i] && t[j]) {
        if (s[i] == t[j])
            i++;
        j++;
    }

    return s[i] == '\0';
}

int main() {
    char s[] = "abc";       // subsequence?
    char t[] = "ahbgdc";    // main string

    if (isSubsequence(s, t))
        printf("Yes, it is a subsequence.\n");
    else
        printf("No, it is not a subsequence.\n");

    return 0;
}
