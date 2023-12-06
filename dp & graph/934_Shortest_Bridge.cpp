#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(grid[i][j]==1)break;
            }
            if(j!=n && grid[i][j]==1)break;
        }
        queue<pair<int,int>>q1,q2;
        grid[i][j]=2;
        q1.push({i,j});
        q2.push({i,j});
        while(!q1.empty()){
            auto cur=q1.front();q1.pop();
            i=cur.first;
            j=cur.second;
            for(int k=0;k<dir.size();k++){
                int nr=i+dir[k][0];
                int nc=j+dir[k][1];
                if(nr>=0 && nc>=0 && nr<n && nc<n && grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    q1.push({nr,nc});
                    q2.push({nr,nc});
                }
            }   
        }
        int dis=0;
        while(!q2.empty()){
            int m=q2.size();
            dis++;
            for(int k=0;k<m;k++){
                auto curr=q2.front();q2.pop();
                i=curr.first;
                j=curr.second;
                for(int d=0;d<dir.size();d++){
                    int nr=i+dir[d][0];
                    int nc=j+dir[d][1];
                    if(nr>=0 && nc>=0 && nr<n && nc<n &&  grid[nr][nc]!=2){
                        if(grid[nr][nc]==1)return dis-1;
                        grid[nr][nc]=2;
                        q2.push({nr,nc});
                    }
                }
            }
        }
        return -1;
        
    }
};