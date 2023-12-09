// https://leetcode.com/problems/toeplitz-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        for(int k=0;k<r;k++){
            int i=k,j=0;
            int cur=matrix[i][j];
            while(j<c && i<r){
                cout<<matrix[i][j]<<" ";
                if(matrix[i][j]!=cur)return false;
                i++;
                j++;
            }
        }
        for(int k=1;k<c;k++){
            int i=0,j=k;
            int cur=matrix[i][j];
            while(j<c && i<r){
                if(matrix[i][j]!=cur)return false;
                i++;
                j++;
            }
        }
        return true;
    }
};