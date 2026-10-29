#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<bool>> visited(m, vector<bool>(n, false));
    vector<int> ans;

    int row = 0, col = 0;
    int direction = 0;

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};

    for (int i = 0; i < m * n; i++) {
        ans.push_back(matrix[row][col]);
        visited[row][col] = true;

        int nr = row + dr[direction];
        int nc = col + dc[direction];

        if (nr < 0 || nr >= m || nc < 0 || nc >= n ||
            visited[nr][nc]) {
            direction = (direction + 1) % 4;

            nr = row + dr[direction];
            nc = col + dc[direction];
        }

        row = nr;
        col = nc;
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> ans = spiralOrder(matrix);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}