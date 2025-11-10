#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char s[n][100];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);

    int len = strlen(s[0]);
    for (int i = 1; i < n; i++) {
        int j = 0;
        while (s[0][j] && s[i][j] && s[0][j] == s[i][j])
            j++;
        if (j < len)
            len = j;
    }

    if (len == 0)
        printf("No common prefix\n");
    else {
        printf("Longest Common Prefix: ");
        for (int i = 0; i < len; i++)
            printf("%c", s[0][i]);
        printf("\n");
    }

    return 0;
}
