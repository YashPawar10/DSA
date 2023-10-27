#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        vector<vector<int>>ans(r,vector<int>(c,0));
        queue<pair<int,int>>q;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0)q.push({i,j});
            }
        }
        int dis=0;
        while(!q.empty()){
            int n=q.size();
            dis++;
            for(int k=0;k<n;k++){
                auto curr=q.front();q.pop();
                int i=curr.first;
                int j=curr.second;
                for(int d=0;d<dir.size();d++){
                    int nr=i+dir[d][0];
                    int nc=j+dir[d][1];
                    if(nr>=0 && nc>=0 && nr<r && nc<c &&  mat[nr][nc]==1){
                        mat[nr][nc]=0;
                        ans[nr][nc]=dis;
                        q.push({nr,nc});
                    }
                }
            }
        }
        return ans;
    }
};