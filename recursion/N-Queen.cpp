// https://leetcode.com/problems/n-queens/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>>ans;
    bool isSafe(vector<string>board,int r,int c,int n){
        for(int i=0;i<n;i++)if(board[i][c]=='Q')return false;

        int nr=r,nc=c;
        while(nr>=0 && nc>=0){
            if(board[nr][nc]=='Q')return false;
            nr--;
            nc--;

        }
        nr=r,nc=c;
        while(nr>=0 && nc>=0){
            if(board[nr--][nc++]=='Q')return false;
        }
        return true;
    }

    void nQueen(vector<string>&board,int r,int n,string s){
        if(r==n){
            ans.push_back(board);
            return;
        }
        for(int c=0;c<n;c++){
            if(isSafe(board,r,c,n)){
                board[r][c]='Q';
                nQueen(board,r+1,n,s);
                board[r][c]='.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        string s="";
        for(int i=0;i<n;i++)s+='.';
        vector<string>board(n,s);
        nQueen(board,0,n,s);
        return ans;
    }
};