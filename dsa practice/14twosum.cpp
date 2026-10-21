// #include <bits/stdc++.h>
// using namespace std;

// void twosum(vector<int>&nums,int target){

// int j=nums.size()-1;

// for (int i=0;i<nums.size();i++){

//     int sum=nums[i]+nums[j];
// if(sum==target){
//     cout<<i<<" "<<j;
    
// }else if(sum>target){
//     j--;
//     i--;
// }

// }

// }int main(){
//     vector<int>nums={1,2,3,4,5,6};
//     twosum(nums,4);
// }






#include <bits/stdc++.h>
using namespace std;


void twosum(vector<int>& nums, int target){

    int i = 0;
    int j = nums.size() - 1;

    while(i < j){

        int sum = nums[i] + nums[j];

        if(sum == target){
            cout << i << " " << j;
            return;
        }
        else if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }
}

int main(){
     vector<int>nums={1,2,3,4,5,6};
     twosum(nums,4);
}