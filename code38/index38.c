//search in sorted 2d matrix
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3,m=3;
    int target=5;
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                found=1;
                break;
            }
        }
        if(found) break;
    }
    if(found){
        printf("Element %d found in the matrix.\n",target);
    } else {
        printf("Element %d not found in the matrix.\n",target);
    }
    return 0;
}