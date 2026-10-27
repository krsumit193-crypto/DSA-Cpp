
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;

    int prefixSum = 0;
    int count = 0;

    for (int num : nums) {
        prefixSum += num;

        if (mp.find(prefixSum - k) != mp.end()) {
            count += mp[prefixSum - k];
        }

        mp[prefixSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;

    cout << subarraySum(nums, k);

    return 0;
}
