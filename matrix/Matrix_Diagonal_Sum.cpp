// https://leetcode.com/problems/matrix-diagonal-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            sum+=mat[i][i]+mat[i][n-i-1];
            if(i==n-1-i)sum-=mat[i][n-i-1];
        }
        return sum;
    }
};