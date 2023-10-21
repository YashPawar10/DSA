#include<vector>
#include<string.h>
using namespace std;
int n,m;
vector<vector<int>>mat;
int dp[55][55][55];
class Solution {
public:
        int neg=-99999;
        int f(int i, int j,int x,int y){
        if(x==n || y==m || i==n || j==m || mat[i][j]==-1 || mat[x][y]==-1)return neg;
        if(dp[i][j][x] != -1) return dp[i][j][x];
        if(i==n-1 && j==m-1){
            return (mat[i][j]==1);
        }
        int res=neg;
        res=max(res,f(i+1,j,x+1,y));
        res=max(res,f(i+1,j,x,y+1));
        res=max(res,f(i,j+1,x+1,y));
        res=max(res,f(i,j+1,x,y+1));
        if(res==neg)return dp[i][j][x]=neg;
        res+=(mat[i][j]==1);
        if(x!=i && y!=j)res+=(mat[x][y]==1);
        return dp[i][j][x]=res;
}
    int cherryPickup(vector<vector<int>>& grid) {
        n=m=grid.size();
        memset(dp,-1,sizeof dp);
        mat=grid;
        int ans= f(0,0,0,0);
        return ans==neg?0:ans;
        return ans;
    }
};