#include <stdio.h>
int main()
{
    int arr[] = {1, 0, 0, 2, 1, 1};
    int i;
    int n = 6;
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
       
            {
                int temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
            }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
