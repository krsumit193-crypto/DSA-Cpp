#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
 vector<int>ans;
 int posin=0;
int negin=1;
 for(int i=0;i<nums.size();i++){

  if(nums[i]>0){
  ans[posin]=nums[i];
  posin+=2;
  }else{
    ans[negin]=nums[i];
    negin+=2;
  }
 }return ans;
}

    int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrangeArray(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}