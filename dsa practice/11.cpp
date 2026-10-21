// #include<bits/stdc++.h>

// using namespace std;
// int main(){
// vector<int>nums={1,1,2,2,3,3,4};

// int ans=0;

// for(int x:nums){
//   ans=ans^x;
// }
// cout<<ans;
// }

#include<bits/stdc++.h>

using namespace std;
int main(){
vector<int>nums={1,1,2,2,3,3,4};

unordered_map<int,int>mp;

for(int x:nums){
  mp[x]++;
}
for(auto x:mp){
  if(x.second==1){
    cout<<x.first;
  }
}
}