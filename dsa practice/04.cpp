#include <bits/stdc++.h>
using namespace std;

int duplicates(vector<int>& nums) {

    int j = 0;

    for (int i = 0; i < nums.size() - 1; i++) {

        if (nums[i] != nums[i + 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    nums[j] = nums[nums.size() - 1];
    j++;

    return j;
}

int main() {

    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

    int k = duplicates(nums);

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}