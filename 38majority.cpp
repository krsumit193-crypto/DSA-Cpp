#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&nums){
unordered_map<int,int>mp;
 int n=nums.size();

    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;

        if (mp[nums[i]] > n / 2) {
            return nums[i];
        }
    }

return -1;
}

int main(){
  vector<int>nums={2,1,2,2,3};
  cout<<majority(nums);
}