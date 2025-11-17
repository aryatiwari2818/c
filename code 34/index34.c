#include <stdio.h>

int main() {
    char a[100], b[100];
    int i, j, k, lenA = 0, lenB = 0, isRotation = 0;

    printf("Enter string A: ");
    scanf("%s", a);
    printf("Enter string B: ");
    scanf("%s", b);

    // Calculate lengths manually
    while (a[lenA] != '\0') lenA++;
    while (b[lenB] != '\0') lenB++;

    // Length check
    if (lenA != lenB) {
        printf("Not rotation\n");
        return 0;
    }

    // Try every possible rotation start
    for (i = 0; i < lenA; i++) {
        // Check if rotating a starting from i matches b
        for (j = 0, k = i; j < lenA; j++) {
            if (a[k] != b[j])
                break;

            k = (k + 1) % lenA;  // wrap around (rotation)
        }

        if (j == lenA) {  // matched full length
            isRotation = 1;
            break;
        }
    }

    if (isRotation)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
