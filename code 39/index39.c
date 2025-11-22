//print diagonals of a matrix
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3,m=3;
    printf("Primary Diagonal: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i][i]);
    }
    printf("\nSecondary Diagonal: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i][m-i-1]);
    }
    printf("\n");
    return 0;
}