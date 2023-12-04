// https://www.codingninjas.com/studio/problems/pascal-s-triangle_1089580

#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>ans;
    for(int i=0;i<n;i++){
      vector<long long>v;
      for(int j=0;j<=i;j++){
        if(j==0 || j==i)v.push_back(1);
        else {
          v.push_back(ans[i-1][j]+ans[i-1][j-1]);
        }
      }
      ans.push_back(v);
    }
    return ans;

}
