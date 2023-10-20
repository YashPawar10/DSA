#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>>dp;
    int f(int n,int m,int i,int j){
        if(i==n-1 && j==m-1)return 1;
        if(i==n || j==m)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=f(n,m,i+1,j)+f(n,m,i,j+1);
    }
    int uniquePaths(int m, int n) {
        dp.resize(101,vector<int>(101,-1));
        return f(n,m,0,0);
    }
};