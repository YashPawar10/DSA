#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>>dp;
    int f(vector<vector<int>>& v,int n,int m,int i,int j){
        if(i==n-1 && j==m-1)return 1;
        if(i==n || j==m)return 0;
        if(v[i][j]==1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=f(v,n,m,i+1,j)+f(v,n,m,i,j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(obstacleGrid[n-1][m-1]==1)return 0;
        dp.resize(101,vector<int>(101,-1));
        return f(obstacleGrid,n,m,0,0);
    }
};