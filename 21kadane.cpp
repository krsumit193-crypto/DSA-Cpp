#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int currentSum = arr[0];
    int maximumSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maximumSum = max(maximumSum, currentSum);
    }

    return maximumSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubarraySum(arr) << endl;

    return 0;
}