// duplicate number
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
            if (cnt == 1){
                

                printf("duplicate=%d", arr[i]);
                  return 0;
              
        }
       
    }
}}