#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<char>>grid;
    int r,c;
    void vis(int i,int j){
        if(i<0 || j<0 || i==r || j==c)return;

        if( grid[i][j]=='0')return;
        grid[i][j]='0';
        vis(i+1,j);
        vis(i-1,j);
        vis(i,j+1);
        vis(i,j-1);
    }
    int numIslands(vector<vector<char>>& inputGrid) {
        grid=inputGrid;
        r=grid.size();
        c=grid[0].size();
        int cc=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                     cc++;
                     vis(i,j);
                }
            }
        }
        return cc;
    }
};