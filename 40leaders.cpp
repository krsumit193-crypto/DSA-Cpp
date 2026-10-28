#include <bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int>& nums) {
    vector<int> ans;

    int maxi = nums.back();
    ans.push_back(maxi);

    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] > maxi) {
            ans.push_back(nums[i]);
            maxi = nums[i];
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};

    vector<int> ans = leader(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}