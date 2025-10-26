#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 9;
    int i;
    int j;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target){
                
        
        printf("%d %d", arr[i], arr[j]);
        return i,j;}}
    }
    return (-1. - 1);
}