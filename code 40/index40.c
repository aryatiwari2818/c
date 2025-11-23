//spiral matrix
#include<stdio.h>
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4,m=4;
    int top=0,bottom=n-1,left=0,right=m-1;
    printf("Spiral Order: ");
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            printf("%d ",arr[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            printf("%d ",arr[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                printf("%d ",arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                printf("%d ",arr[i][left]);
            }
            left++;
        }
    }
    printf("\n");
    return 0;
}