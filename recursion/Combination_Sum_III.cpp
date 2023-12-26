// https://leetcode.com/problems/combination-sum-iii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void helper(int i,int k,int n,vector<int>&v){
        if(n==0 && k==0){
            ans.push_back(v);
            return;
        }
        if(n<0 || k==0)return;
        for(int j=i;j<=9;j++){
            v.push_back(j);
            helper(j+1,k-1,n-j,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        helper(1,k,n,v);
        return ans;
    }
};