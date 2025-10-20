#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 4,5};
     int sum = 0;

     int n = 5;
     int n2= sizeof(arr) / sizeof(arr[0]);
     int sum2 =n*(n+1)/2;
     for (int i = 0; i < n2; i++)
     {
         sum = sum + arr[i];
     }
     printf("missing num=%d", sum2 - sum);
     return sum2 - sum;
 }