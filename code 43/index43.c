#include <stdio.h>

int lowerbound(int a[], int n, int x) {
    int low = 0, high = n - 1, mid, ans = n; // return n if not found
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int maxones(int a[][100], int n, int m) {
    int max_count = 0, index = -1;

    for (int i = 0; i < n; i++) {
        int lb = lowerbound(a[i], m, 1);
        int count = (lb == m ? 0 : m - lb);

        if (count > max_count) {
            max_count = count;
            index = i;
        }
    }

    return index;
}

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[100][100];

    printf("Enter the elements of the matrix (0s and 1s only):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int row = maxones(a, n, m);
    printf("Row with maximum number of 1s: %d\n", row);

    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
