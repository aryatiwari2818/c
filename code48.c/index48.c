#include <stdio.h>

int main() {
    int n, m;
    printf("Enter n and m:\n");
    scanf("%d %d", &n, &m);

    printf("Reading matrix...\n");
    int mat[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int x;
    printf("Enter x:\n");
    scanf("%d", &x);

    printf("Searching...\n");

    int r = 0, c = m - 1;

    while (r < n && c >= 0) {
        if (mat[r][c] == x) {
            printf("Found at (%d,%d)\n", r, c);
            return 0;
        } else if (mat[r][c] < x) {
            r++;
        } else {
            c--;
        }
    }

    printf("Not found. Matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
