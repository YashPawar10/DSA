#include<string.h>
class Solution {
public:
    double dp[26][26][101];
    double f(int n,int i,int j,int k){
        if(i>n-1 || j>n-1 || i<0 || j<0)return 0;
        if(k==0)return 1;
        if(dp[i][j][k]>-0.9)return dp[i][j][k];
        double ans=0.0;
        ans+=f(n,i+1,j+2,k-1)*0.125;
        ans+=f(n,i+2,j+1,k-1)*0.125;
        ans+=f(n,i+2,j-1,k-1)*0.125;
        ans+=f(n,i+1,j-2,k-1)*0.125;
        ans+=f(n,i-1,j+2,k-1)*0.125;
        ans+=f(n,i-2,j+1,k-1)*0.125;
        ans+=f(n,i-2,j-1,k-1)*0.125;
        ans+=f(n,i-1,j-2,k-1)*0.125;
        return dp[i][j][k]=ans;

    }
    double knightProbability(int n, int k, int row, int column) {
        memset(dp,-1,sizeof dp);
        return f(n,row,column,k);
    }
};