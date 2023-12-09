// https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int>ans;
        for(int i=0;i<r;i++){
            int minc=0;
            for(int j=1;j<c;j++){
                if(matrix[i][j]<matrix[i][minc])minc=j;
            }
            int maxr=0;
            for(int k=1;k<r;k++){
                if(matrix[k][minc]>matrix[maxr][minc])maxr=k;
            }
            if(maxr==i)ans.push_back(matrix[i][minc]);
        }
        return ans;
    }
};