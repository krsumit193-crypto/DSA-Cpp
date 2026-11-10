
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countSubarrays(vector<int>& nums, int k) {
    unordered_map<int, int> prefixXor;
    prefixXor[0] = 1;

    int xr = 0;
    int count = 0;

    for (int num : nums) {
        xr ^= num;

        int target = xr ^ k;

        if (prefixXor.find(target) != prefixXor.end()) {
            count += prefixXor[target];
        }

        prefixXor[xr]++;
    }

    return count;
}

int main() {
    vector<int> nums = {4, 2, 2, 6, 4};
    int k = 6;

    cout << countSubarrays(nums, k) << endl;

    return 0;
}
