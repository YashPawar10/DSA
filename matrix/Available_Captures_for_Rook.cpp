// https://leetcode.com/problems/available-captures-for-rook/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i,j;
        int flag=0;
        for(i=0;i<board.size();i++){
            for(j=0;j<board[0].size();j++){
                if(board[i][j]=='R'){
                    flag=1;
                    break;
                }
            }
            if(flag==1)break;
        }
        int ans=0;
        //left
        int c=j-1;
        while(c>=0){
            if(board[i][c]=='p'){
                ans++;
                break;
            }
            if(board[i][c]=='B')break;
            c--;

        }
        //right
        c=j+1;
        while(c<board.size()){
            if(board[i][c]=='p'){
                ans++;
                break;
            }
            if(board[i][c]=='B')break;
            c++;
        }
        // //top
        int r=i-1;
        while(r>=0){
            cout<<board[r][j]<<" ";
            if(board[r][j]=='p'){
                ans++;
                break;
            }
            if(board[r][j]=='B')break;
            r--;
        }
        //bottom
        r=i+1;
        while(r<board.size()){
            if(board[r][j]=='p'){
                ans++;
                break;
            }
            if(board[r][j]=='B')break;
            r++;
        }
        return ans;
    }
};