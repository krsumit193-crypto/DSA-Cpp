

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;

    int n = matrix.size();
    int m = matrix[0].size();

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    while (top <= bottom && left <= right) {

        // Left to right
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
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

    cout << endl;
    return 0;
}
