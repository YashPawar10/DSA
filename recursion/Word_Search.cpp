// https://leetcode.com/problems/word-search/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // vector<vector<int>>vis;
    bool helper(vector<vector<char>>& board, string word,int i,int r,int c,string newword){
        if(newword==word)return true;//we find the word
        if(r<0 || r>=board.size() || c<0 || c>=board[0].size())return false;
        if(board[r][c]!=word[i])return false;
        char ch=board[r][c];
        newword+=board[r][c];
        board[r][c]='#'; //for marking so we not revisit again
        bool result = (helper(board, word, i + 1, r + 1, c, newword) ||
                       helper(board, word, i + 1, r - 1, c, newword) ||
                       helper(board, word, i + 1, r, c + 1, newword) ||
                       helper(board, word, i + 1, r, c - 1, newword));

        board[r][c]=ch;//revert changes

        return result;

    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(helper(board,word,0,i,j,""))return true;
            }
        }
        return false;
    }
};