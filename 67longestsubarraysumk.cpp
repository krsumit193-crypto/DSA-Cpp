#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarray(vector<int>& nums, int k) {
    unordered_map<long long, int> prefixSum;
    long long sum = 0;
    int longest = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum == k) {
            longest = i + 1;
        }

        long long remaining = sum - k;

        if (prefixSum.find(remaining) != prefixSum.end()) {
            longest = max(longest, i - prefixSum[remaining]);
        }

        if (prefixSum.find(sum) == prefixSum.end()) {
            prefixSum[sum] = i;
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    cout << longestSubarray(nums, k) << endl;

    return 0;
}