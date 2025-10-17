#include<stdio.h>
int main(){
    //1.
//     int arr[]={1,2,3,4,5};
//     int max=arr[0];
//     int min=arr[0];
//     for(int i=1;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     printf("Max=%d\nMin=%d\n",max,min);
//     return 0;
// }
//2.
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;

}
printf("Reversed array: ");
for(int i=0;i<n;i++){
    printf("%d\n ",arr[i]);

}}