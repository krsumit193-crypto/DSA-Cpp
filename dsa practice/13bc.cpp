// Optimal approach of Longest Subarray with Sum K

#include <bits/stdc++.h>
using namespace std;

int longest(vector<int>& nums, int K) {

    int maxl = 0;
    int j = 0;
    int sum = 0;

    for(int i = 0; i < nums.size(); i++) {

        sum += nums[i];

        while(sum > K) {
            sum -= nums[j];
            j++;
        }

        if(sum == K) {
            maxl = max(maxl, i - j + 1);
        }
    }

    return maxl;
}

int main() {

    vector<int> nums = {1, 2, 3, 1, 4, 3, 3};

    cout << longest(nums, 4);

    return 0;
}