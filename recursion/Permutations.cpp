// https://leetcode.com/problems/permutations/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void f(vector<int>&nums,int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int k=i;k<nums.size();k++){
            swap(nums[i],nums[k]);
            f(nums,i+1);
            swap(nums[i],nums[k]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        f(nums,0);
        return ans;
    }
};