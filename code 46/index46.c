#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    for(int j = 0; j < m; j++) {
        printf("%d ", arr[0][j]);
    }

   
    for(int i = 1; i < n; i++) {
        printf("%d ", arr[i][m - 1]);
    }

    
    if(n > 1) {
        for(int j = m - 2; j >= 0; j--) {
            printf("%d ", arr[n - 1][j]);
        }
    }

   
    if(m > 1) {
        for(int i = n - 2; i > 0; i--) {
            printf("%d ", arr[i][0]);
        }
    }

    return 0;
}