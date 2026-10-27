
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
    unordered_map<long long, int> prefixIndex;
    long long prefixSum = 0;
    int maxLength = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        if (prefixSum == k) {
            maxLength = i + 1;
        }

        long long remaining = prefixSum - k;

        if (prefixIndex.find(remaining) != prefixIndex.end()) {
            maxLength = max(maxLength,
                            i - prefixIndex[remaining]);
        }

        if (prefixIndex.find(prefixSum) == prefixIndex.end()) {
            prefixIndex[prefixSum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;

    cout << longestSubarray(arr, k) << endl;

    return 0;
}
