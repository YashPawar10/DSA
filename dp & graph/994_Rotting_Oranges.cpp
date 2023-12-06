#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        queue<pair<int,int>>q;
        int cnt=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==2)q.push({i,j});
                if(grid[i][j]==1)cnt++;
            }
        }
        if(cnt==0)return 0;
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            ans++;
            for(int k=0;k<n;k++){
                auto curr=q.front();q.pop();
                int i=curr.first;
                int j=curr.second;
                for(int k=0;k<dir.size();k++){
                    int nr=i+dir[k][0];
                    int nc=j+dir[k][1];
                    if(nr>=0 && nc>=0 && nr<r && nc<c &&  grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        q.push({nr,nc});
                    }
                }
            }
        }
        cnt=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1)cnt++;
            }
        }
        if(cnt>0)return -1;
        return ans-1;
    }
};