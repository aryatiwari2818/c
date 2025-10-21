#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int temp=arr[0];
    int n=5;
    int i;
    for(int i=0;i<n;i++){
         arr[i-1]=arr[i];

    }
    arr[4]=temp;
    for(int i=0;i<n;i++){
       
    printf("%d",arr[i]);
    }
}