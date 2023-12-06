#include <vector>
#include<queue>
using namespace std;
class Solution {
public:
    int r,c;
    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    vector<vector<int>>h;
    vector<vector<bool>> bfs(queue<pair<int,int>>q){
        vector<vector<bool>>vis(r,vector<bool>(c,false));
        while(!q.empty()){
            auto curr=q.front();q.pop();
            int i=curr.first;
            int j=curr.second;
            vis[i][j]=true;
            for(int k=0;k<dir.size();k++){
                int nr=i+dir[k][0];
                int nc=j+dir[k][1];
                if(nr>=0 && nc>=0 && nr<r && nc<c && h[nr][nc]>=h[i][j] && vis[nr][nc]==false)q.push({nr,nc});
            }
        }
        return vis;

    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>>ans;
        h=heights;
        r=h.size(),c=h[0].size();
        queue<pair<int,int>>poq;
        queue<pair<int,int>>aoq;
        for(int i=0;i<r;i++){
            poq.push({i,0});
            aoq.push({i,c-1});
        }
        for(int i=1;i<c;i++) poq.push({0,i});
        for(int i=0;i<c-1;i++) aoq.push({r-1,i});
        vector<vector<bool>>m1=bfs(poq);
        vector<vector<bool>>m2=bfs(aoq);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(m1[i][j]==true && m2[i][j]==true)ans.push_back({i,j});
            }
        }

        return ans;

    
    }
};