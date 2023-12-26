// https://leetcode.com/problems/combinations/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void helper(int n,int k,int i,vector<int>&v){
        if(k==0){
            ans.push_back(v);
            return;
        }
        for(int j=i;j<=n;j++){
            v.push_back(j);
            helper(n,k-1,j+1,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        helper(n,k,1,v);
        return ans;
    }
};