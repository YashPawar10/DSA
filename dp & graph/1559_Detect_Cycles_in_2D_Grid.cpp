#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
    vector<vector<char>> g;
    vector<vector<bool>>vis;
    bool dfs(int a,int b,int pa,int pb,char c){
        for(int k=0;k<dir.size();k++){
            int i=a+dir[k][0];
            int j=b+dir[k][1];
            if(i>=0 && j>=0 && i<g.size() && j<g[0].size() && g[i][j]==c){
                if(!vis[i][j]){
                    vis[i][j]=true;
                    if(dfs(i,j,a,b,c))return true;
                }
                else{
                    if(i!=pa && j!=pb)return true;
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vis.resize(n,vector<bool>(m,false));
        g=grid;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]){
                    vis[i][j]=true;
                    if(dfs(i,j,-1,-1,grid[i][j]))return true;
                }
            }
        }
        return false;

    }
};