#include<bits/stdc++.h>>
using namespace std;
int cons(vector<int>&nums){
int cnt=0;
int maxcount=0;

for(int i=0;i<nums.size();i++){
if(nums[i]==1){
  cnt++;
  maxcount=max(maxcount,cnt);
}else{
  cnt=0;
}

}

return maxcount;
  
}
int main(){
  vector<int>nums={1,1,3,1,1,1};
  cout<< cons(nums);
}