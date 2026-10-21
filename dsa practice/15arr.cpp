#include <bits/stdc++.h>
using namespace std;

void sortt(vector<int>& nums) {

    int low = 0;
    int mid = 0;
    int high = static_cast<int>(nums.size()) - 1;

    while (mid <= high) {

        if (nums[mid] == 0) {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
        }
        else {
            mid++;
        }
    }
}

int main() {

    vector<int> nums = {1, 0, 2, 1, 0, 0, 2};

    sortt(nums);

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
