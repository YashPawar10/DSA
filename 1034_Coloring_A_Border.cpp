#include <vector>
using namespace std;
class Solution {
public:
    vector<pair<int,int>>in;
    void f(vector<vector<int>>& grid,int i,int j,int cc,int nc){
        if(i<0 || j<0 || i==grid.size() || j==grid[0].size())return;
        if(grid[i][j]!=cc)return;
        grid[i][j]=-nc;
        f(grid,i+1,j,cc,nc);
        f(grid,i-1,j,cc,nc);
        f(grid,i,j+1,cc,nc);
        f(grid,i,j-1,cc,nc);
        if(i!=0 && i!=grid.size()-1 && j!=0 && j!=grid[0].size()-1 && grid[i][j+1]==-nc && grid[i][j-1]==-nc && grid[i+1][j]==-nc && grid[i-1][j]==-nc)in.push_back({i,j});
    
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int sr, int sc, int color) {
        if(grid[sr][sc]==color)return grid;
        int cc=grid[sr][sc];
        f(grid,sr,sc,grid[sr][sc],color);
        for(auto x:in){
            grid[x.first][x.second]=cc;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]<0)grid[i][j]*=-1;
            }
        }
        return grid;
    }
};