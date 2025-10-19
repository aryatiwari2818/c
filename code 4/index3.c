#include<stdio.h>


int main()
{

    int arr[5] = {1, 7, 3, 4, 5};
    int rmax[5];
    int lmax[5];
     lmax[0] = arr[0];
   
    
    int water = 0;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > lmax[i - 1])
        {
            lmax[i] = arr[i];
        }
        else
        {
            lmax[i] = lmax[i - 1];
        }
    }
    rmax[4] = arr[4];
    for (int i = 3; i >= 0; i--)
    {
        if (arr[i] > rmax[i + 1])
        {
            rmax[i] = arr[i];
        }
        else
        {
            rmax[i] = rmax[i + 1];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        int minh;
        if (lmax[i] < rmax[i])
            minh = lmax[i];
        else
            minh = rmax[i];
        water = water + (minh - arr[i]);
    }
    printf("total water=%d", water);
    return 0;
}

