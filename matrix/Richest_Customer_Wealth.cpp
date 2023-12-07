// https://leetcode.com/problems/richest-customer-wealth/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size(),m=accounts[0].size();
        int ms=0,cs;
        for(int i=0;i<n;i++){
            cs=0;
            for(int j=0;j<m;j++){
                cs+=accounts[i][j];
            }
            ms=max(ms,cs);
        }
        return ms;
    }
};

