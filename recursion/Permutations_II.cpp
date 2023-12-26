// https://leetcode.com/problems/permutations-ii/description/

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
        unordered_set<int>s;
        for(int k=i;k<nums.size();k++){
            if(s.find(nums[k])!=s.end())continue;
            s.insert(nums[k]);
            swap(nums[i],nums[k]);
            f(nums,i+1);
            swap(nums[i],nums[k]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        f(nums,0);
        return ans;
    }
};