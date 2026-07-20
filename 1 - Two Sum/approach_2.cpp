// Problem : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target

// More effecient approach using sort + two pointers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    vector<int> twoSum(vector<int>& nums,int target){
        vector<pair<int,int>> arr;  // another vector will contain index and value of the original array
        int n = nums.size();  // total no of elements in nums
        for(int i=0;i<n;i++){  // storing index and value in the new arr
                arr.push_back({nums[i],i}); 
        }
        sort(arr.begin(),arr.end()); // sorting the new array in increasing order of value
        int i=0; 
        int l=n-1;
        int sum;
        
        while(i<l){
            sum = arr[i].first+arr[l].first;
            if(sum==target){
                return{arr[i].second,arr[l].second};
            }
            if(sum>target){
                l--;
            }
            if(sum<target){
                i++;
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