#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);

    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

    printf("%d\n", a[k-1]);
    printf("%d\n", a[n-k]);

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, j, num = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                num = 1;
            else
                num = num * (i - j + 1) / j;
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}

