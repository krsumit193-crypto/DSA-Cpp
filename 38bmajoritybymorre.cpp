#include<bits/stdc++.h>
using namespace std;

 int moorevoting(vector<int>&nums){

int candidate=0;
int count=0;

for(int i=0;i<nums.size();i++){
  if(count==0){
    candidate=nums[i];
  }
  if(nums[i]==0){
    count++;
  }else 
  count--;
}
return candidate;

 }

 int main(){

  vector<int>nums={2,2,3,3,2,4,2,5,7};
  cout<<moorevoting(nums);

 }