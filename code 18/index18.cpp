#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*int a1[] = {1, 2, 3};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int a2[] = {4, 5};
    int n2 = sizeof(a2) / sizeof(a2[0]);
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(a2[i]);
    }
    vector<int> uni;
    for (auto it : st)
    {
        uni.push_back(it);
        cout << it << "";
    }}*/
    // intersection

    int i = 0;
    int j = 0;

    vector<int> ans;
    int A[] = {1, 2, 3, 3, 4, 5, 6};
    int n=sizeof(A)/sizeof(A[0]);
    int B[] = {2, 3, 3, 5, 6, 6, 7};
    int m=sizeof(B)/sizeof(B[0]);
    sort(A,A+n);
    sort(B,B+m);
    while (i < n && j < m)
    {
        if (A[i] < B[j]){
            i++;}
        else if (A[i] > B[j]){
            j++;}
        else
        {
            ans.push_back(A[i]);
          
        
          i++;
            j++;}}
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << "";
        }
    
    return 0;
}