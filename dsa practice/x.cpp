#include <bits/stdc++.h>
using namespace std;

void twosum(vector<int>& nums, int target) {

    int j = nums.size() - 1;

    for(int i = 0; i< nums.size(); i++) {

        int sum = nums[i] + nums[j];

        if(sum == target) {
            cout << i << " " << j;
            return;
        }
        else if(sum > target) {
            j--;
            i--;  // i ko same position par rakhne ke liye
        }
    }

    cout << "No pair found";
}

int main() {

    vector<int> nums = {1, 2, 4, 6, 7, 8};

    twosum(nums, 8);

    return 0;
}