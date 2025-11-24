#include <bits/stdc++.h>
using namespace std;

void markRow(int arr[4][4], int row) {
    for (int j = 0; j < 4; j++) {
        if (arr[row][j] != 0)
            arr[row][j] = -1;
    }
}

void markCol(int arr[4][4], int col) {
    for (int i = 0; i < 4; i++) {
        if (arr[i][col] != 0)
            arr[i][col] = -1;
    }
}

int main() {
    int arr[4][4] = {
        {1,0,0,1},
        {0,1,1,0},
        {1,1,0,0},
        {0,0,1,1}
    };

    int n = 4, m = 4;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                markRow(arr, i);
                markCol(arr, j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == -1)
                arr[i][j] = 0;
        }
    }

    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
