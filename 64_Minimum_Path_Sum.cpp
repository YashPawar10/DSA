#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> dp;
    int f(vector<vector<int>> &grid, int n, int m, int i, int j)
    {
        if (i == n - 1 && j == m - 1)
            return grid[n - 1][m - 1];
        if (i == n || j == m)
            return INT_MAX;
        if (dp[i][j] != -1)
            return dp[i][j];
        return dp[i][j] = grid[i][j] + min(f(grid, n, m, i + 1, j), f(grid, n, m, i, j + 1));
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        dp.resize(201, vector<int>(201, -1));
        return f(grid, n, m, 0, 0);
    }
};