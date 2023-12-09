// https://leetcode.com/problems/reshape-the-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>arr(r,vector<int>(c));
        int row = mat.size(), col = mat[0].size(), ri=0, ci=0;
        if(r==row || c==col ) return mat;
        if(r*c != row*col) return mat;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                arr[ri][ci] = mat[i][j];
                ci++;
                if(ci == c ){
                ci=0;
                ri++;
            }
            }
        }
        return arr;
    }
};