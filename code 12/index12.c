// leaders in an array
#include <stdio.h>
int main()
{
    int arr[] = {22, 4, 55, 67, 8, 9};
    int n = 6;
    int maxi = __WINT_MIN__;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            printf("%d=leader\n", arr[i]);
        }
       
              maxi=arr[i];
      
    }
}