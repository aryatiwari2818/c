#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
    int j = 0;

    vector<int> ans;
    int A[] = {1, 2, 3, 3, 4, 5, 6};
    int n = sizeof(A) / sizeof(A[0]);
    int B[] = {2, 3, 3, 5, 6, 6, 7};
    int m = sizeof(B) / sizeof(B[0]);
    // sort(A,A+n);
    // sort(B,B+m);
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] > B[j])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]);

            i++;
            j++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "";
    }

    return 0;
}