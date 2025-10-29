// number of occurrences
#include <stdio.h>
int main()
{

    int n = 6;
    int arr[] = {1, 3, 2, 2, 3, 3};
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {

                cnt++;
                arr[j] = -1;
            }
        }
        if (arr[i] != -1)

        {
            printf("count of %d\n=%d\n", arr[i], cnt);
        }
    }
    return 0;
}