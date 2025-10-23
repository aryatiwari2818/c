#include<stdio.h>
int main(){
    int arr[]={1,2,3,3,4,5,5};
    int  n=7;
    int el=5;
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=i+1;j<n;j++){
        if(arr[j]==el){
            count++;
        }
    }
    printf("%d",count);
    break;
}
return 0;}