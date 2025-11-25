//matrix multiplication
#include <stdio.h>
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10]
, int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    if(columnFirst != rowSecond) {
        printf("Matrix multiplication not possible\n");
        return;
    }
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }

    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < columnSecond; ++j) {
            for(int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10], rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < columnFirst; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < rowSecond; ++i) {
        for(int j = 0; j < columnSecond; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

    printf("Resultant Matrix:\n");
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < columnSecond; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}