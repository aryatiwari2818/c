#include <stdio.h>
#include <string.h>

int main() {
    char *w[] = {"eat","tea","tan","ate","nat","bat"};
    int n = 6, used[6] = {0};
    char a[20], b[20], t;
    int i, j, x, y;

    for (i = 0; i < n; i++) {
        if (used[i]) continue;

        strcpy(a, w[i]);
        for (x = 0; x < strlen(a); x++)
            for (y = x + 1; y < strlen(a); y++)
                if (a[x] > a[y]) t = a[x], a[x] = a[y], a[y] = t;

        printf("[ %s ", w[i]);
        used[i] = 1;

        for (j = i + 1; j < n; j++) {
            if (used[j]) continue;

            strcpy(b, w[j]);
            for (x = 0; x < strlen(b); x++)
                for (y = x + 1; y < strlen(b); y++)
                    if (b[x] > b[y]) t = b[x], b[x] = b[y], b[y] = t;

            if (!strcmp(a, b)) {
                printf("%s ", w[j]);
                used[j] = 1;
            }
        }

        printf("]\n");
    }
}
