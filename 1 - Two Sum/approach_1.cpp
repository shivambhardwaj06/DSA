// Problem : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target

// Here is brute force approach for this question 

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums,int target){
       int l = nums.size();
       for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
       }

        return {};

    }
};
int main(){
    vector<int> nums = {22,34,21,43,36,64,54};
    Solution s;
    vector<int> ans = s.twoSum(nums,64);
    cout << ans[0] << " " << ans[1];

}