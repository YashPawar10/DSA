// https://leetcode.com/problems/combination-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>v,int num){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(target<0) return;
        for(int i=num;i<candidates.size();i++){
            v.push_back(candidates[i]);
            helper(candidates,target-candidates[i],ans,v,i);
            v.pop_back();
    
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(candidates,target,ans,v,0);
        return ans;

    }
};