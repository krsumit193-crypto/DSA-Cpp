// Better approach of longest subarray with sum K

#include <bits/stdc++.h>
using namespace std;

int longest(vector<int>& nums, int K) {

    int maxl = 0;

    for(int i = 0; i < nums.size(); i++) {

        int sum = 0;

        for(int j = i; j < nums.size(); j++) {

            sum += nums[j];

            if(sum == K) {
                maxl = max(maxl, j - i + 1);
            }
        }
    }

    return maxl;
}

int main() {

    vector<int> nums = {1, 2, 3, 1, 4, 3, 3};

    cout << longest(nums, 4);

    return 0;
}