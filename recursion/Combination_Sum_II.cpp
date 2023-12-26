// https://leetcode.com/problems/combination-sum-ii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int>& candidates, int target,int i,vector<int>&v){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(i==candidates.size() || target<0)return;
        for(int j=i;j<candidates.size();j++){
            v.push_back(candidates[j]);
            helper(candidates,target-candidates[j],i+1,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v;
        helper(candidates,target,0,v);
        return ans;
    }
};