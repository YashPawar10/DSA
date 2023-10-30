#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int find(vector<int>&par,int x){
        if(x==par[x])return x;
        return par[x]=find(par,par[x]);
    }
    void uni(vector<int>&par,int a,int b){
        a=find(par,a);
        b=find(par,b);
        if (a != b) {
            par[b] = a;
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<int>par(n);
        for(int i=0;i<n;i++)par[i]=i;
        for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1])uni(par,i,j);
          }
        }
        unordered_set<int>s;
        for(int i=0;i<n;i++)s.insert(find(par,i));
        return n-s.size();

    }
};