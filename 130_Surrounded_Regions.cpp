#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
        queue<pair<int,int>>q;
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            if(board[i][0]=='O'){
                q.push({i,0});
                board[i][0]='Z';
            }
            if(board[i][c-1]=='O'){ 
                q.push({i,c-1});
                board[i][c-1]='Z';
            }
        }
        for(int i=0;i<c;i++){
            if(board[0][i]=='O'){
                q.push({0,i});
                board[0][i]='Z';
            }
            if(board[r-1][i]=='O'){
                q.push({r-1,i});
                board[r-1][i]='Z';

            }
        }
        while(!q.empty()){
            auto curr=q.front();q.pop();
            int i=curr.first;
            int j=curr.second;
            for(int k=0;k<dir.size();k++){
                int nr=i+dir[k][0];
                int nc=j+dir[k][1];
                if(nr>=0 && nc>=0 && nr<r && nc<c && board[nr][nc]=='O'){
                    board[nr][nc]='Z';
                    q.push({nr,nc});
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='Z')board[i][j]='O';
                else board[i][j]='X';
            }
        }
    }
};