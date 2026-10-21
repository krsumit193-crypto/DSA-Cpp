#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int>&nums,int target){

  for (int i=0;i<(int)nums.size();i++){
    if (nums[i]==target){
      return i;
    }

  }
      return -1;
  



}
int main(){
  vector<int>nums={2,34,5,8,9};
  
  cout<<linearsearch(nums,88);
 

}