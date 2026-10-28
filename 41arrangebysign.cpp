#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos, neg;

    // Step 1: Separate positive and negative elements
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            pos.push_back(nums[i]);
        } else {
            neg.push_back(nums[i]);
        }
    }

    // Step 2: Fill positive at even indices, negative at odd indices
    for (int i = 0; i < pos.size(); i++) {
        nums[2 * i] = pos[i];
        nums[2 * i + 1] = neg[i];
    }

    return nums;
}
