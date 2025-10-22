#include <stdio.h>
int main()
{

   /* int arr[] = {1, -1, 4, -8, 9};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            printf("%d", arr[i]);
    }
    for (int i = 0; i< n; i++)
    {
        if (arr[i] < 0)
            printf("%d", arr[i]);
    }
}*/
//kadane's algorithm
/*int arr[]={-2,-3,4,-1,-2,1,5,-3};
int n=8;
 int sum=0;
  int maxsum=__WINT_MIN__;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
    if( sum>maxsum)
    maxsum=sum;


if(sum<0)
sum=0;}
printf("%d",maxsum);}*/
// alt pos neg
int arr[]={1,-3,-4,-8,7,9};
int n=6;
int ans[n];
int p=0;
int ne=1;
for(int i=0;i<n;i++){
    if(arr[i]>0){
         ans[p]=arr[i];
         p=p+2;
    }
else {
    ans[ne]=arr[i];
    ne=ne+2;
}
}

for(int i=0;i<n;i++){
    printf("%d",ans[i]);
}

return 0;
}