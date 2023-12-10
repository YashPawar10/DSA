// https://leetcode.com/problems/special-positions-in-a-binary-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int r=mat.size(), c=mat[0].size();
        vector<int>row(r,0);
        vector<int>col(c,0);
        int cnt=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1 && row[i]==1 && col[j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};