//count islands
#include <stdio.h>

void dfs(char grid[][50], int r, int c, int rows, int cols) {
    if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '0')
        return;
    grid[r][c] = '0';
    dfs(grid, r - 1, c, rows, cols);
    dfs(grid, r + 1, c, rows, cols);
    dfs(grid, r, c - 1, rows, cols);
    dfs(grid, r, c + 1, rows, cols);
}

int numIslands(char grid[][50], int rows, int cols) {
    int count = 0;
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
            if (grid[r][c] == '1') {
                count++;
                dfs(grid, r, c, rows, cols);
            }
    return count;
}

int main() {
    char grid[50][50] = {
        "11000",
        "11000",
        "00100",
        "00011"
    };
    printf("%d\n", numIslands(grid, 4, 5));
    return 0;
}
