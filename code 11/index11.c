#include<stdio.h>
int main()
{
 int arr[5]={1,2,3,4,5};
    int k=3; 
    int n=sizeof(arr)/sizeof(arr[0]);
int windowsum=0;
for(int i=0;i<k;i++){
 windowsum=windowsum+arr[i];
}

int maxsum=windowsum;
for(int j=k;j<n;j++){
    windowsum=windowsum+arr[j]-arr[j-k];}
if(windowsum>maxsum){
    maxsum=windowsum;
}
printf("maxsum=%d\n",maxsum);

}