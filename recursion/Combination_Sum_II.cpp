// https://leetcode.com/problems/combination-sum-ii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int>&candiates, int sum , int i , vector<int>&currAns,bool preTaken){
        if(sum==0){
            ans.push_back(currAns);
            return;
        }//1 1 2 5
        if(sum<0 || i>=candiates.size())return;
        currAns.push_back(candiates[i]);
        if(i>0 && preTaken == false && candiates[i-1] == candiates[i]){;}
        else helper(candiates,sum-candiates[i],i+1,currAns,true);
        currAns.pop_back();
        helper(candiates,sum,i+1,currAns,false);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        helper(candidates, target , 0 ,v,false);
        return ans;
    }
};