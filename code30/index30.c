#include <stdio.h>

int main() {
    char s[100];
    int i, j, len = 0;
    int left, right;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    // Find length manually
    while (s[len] != '\0')
        len++;

    left = 0;
    right = len - 1;

    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else {
            // Try skipping left character
            int l1 = left + 1, r1 = right;
            int ok1 = 1;
            while (l1 < r1) {
                if (s[l1] != s[r1]) {
                    ok1 = 0;
                    break;
                }
                l1++;
                r1--;
            }

            // Try skipping right character
            int l2 = left, r2 = right - 1;
            int ok2 = 1;
            while (l2 < r2) {
                if (s[l2] != s[r2]) {
                    ok2 = 0;
                    break;
                }
                l2++;
                r2--;
            }

            if (ok1 == 1 || ok2 == 1)
                count = 0; // still valid
            else
                count = 1; // not possible

            break;
        }
    }

    if (count == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
