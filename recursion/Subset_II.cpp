// https://leetcode.com/problems/subsets-ii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    //unordered_set<vector<int>>m;
    void f(vector<int>& nums,vector<int>v,int i){
        if(i==nums.size()){
            ans.push_back(v);
            return;    
        }
        v.push_back(nums[i]);
        f(nums,v,i+1);
        v.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        f(nums,v,i+1);
        

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        f(nums,v,0);
        return ans;
    }
};