#include<bits/stdc++.h>

using namespace std;

void missingnumber(vector<int>&nums){
  int sum=0;
  int n=nums.size()+1;
  int originalSum = n * (n + 1) / 2;
  
 for(int i=0;i<n;i++){
  sum=nums[i]+sum;

 }
 int ans=originalSum-sum;
  cout<<ans;

}
int main(){


  vector<int>nums={1,2,3,5,6};
  missingnumber(nums);
  
  
}