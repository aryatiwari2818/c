#include<stdio.h>
int main(){
    int arr[]={3,4,5,1,2};
    int n=5;
    int c1=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1]){
           c1++;
        }}
        if(arr[0]<arr[n-1]){
        c1++;}
         if(c1<=1) {
            printf("sorted and rotated");
        }
        else
printf(" not sorted and rotated");
    
    return 0;
    
}