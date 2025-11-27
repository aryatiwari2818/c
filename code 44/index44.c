//snake pattern printing
#include <stdio.h>
int main(){
    int n,m;
    int a[100][100]={{1,2, 3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     };
    n=3; m=4;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                printf("%d ",a[i][j]);
            }
        }
    }
    return 0;
}