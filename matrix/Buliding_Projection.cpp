// https://www.codingninjas.com/studio/problems/buildings-projection_1466964

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
int projectionArea(vector<vector<int>> &grid) {
    // Write your code here.
    int cnt=0; 
    int r=grid.size(),c=grid[0].size();
    for(int i=0;i<r;i++){
        int mx=INT_MIN;
        for(int j=0;j<c;j++){
            mx=max(mx,grid[i][j]);//finding row minimum
            if(grid[i][j]!=0)cnt++;//for top view add 1 if it is not 0
        }
        cnt+=mx;//left view
    }
    for(int i=0;i<c;i++){
        int mx=INT_MIN;
        for(int j=0;j<r;j++){
            mx=max(mx,grid[j][i]);//finding column min
        }
        cnt+=mx;//bottom view
    }
    return cnt;
}