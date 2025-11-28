#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int>ls;   

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ls.push_back(matrix[i][j]);
        }
    }

    
    sort(ls.begin(), ls.end());

    
    return ls[(n * m) / 2];
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    cout << "Median is " << findMedian(matrix) << endl;
    return 0;
}
