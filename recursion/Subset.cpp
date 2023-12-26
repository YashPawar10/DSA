// https://leetcode.com/problems/subsets/?source=submission-ac

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void f(vector<int>& nums,vector<int>v,int i){
        if(i==nums.size()){
            ans.push_back(v);
            return;    
        }
        f(nums,v,i+1);
        v.push_back(nums[i]);
        f(nums,v,i+1);
        

    } 
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        f(nums,v,0);
        return ans;
    }
};