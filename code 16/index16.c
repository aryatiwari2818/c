#include <stdio.h>
int main(void)
{
    int arr[] = {1, 2, 3, -8, -9, 7};
    int n = 6;
    //int pro=1 ;
    int maxi = arr[0];
    int i;
    for(int i=0;i<n;i++){
    int pro=1;
        for (int j = i; j < n; j++)
        {
            pro =pro* arr[j];
        
        if(pro>maxi);
        maxi=pro;}}
        printf("%d", maxi);
    }
