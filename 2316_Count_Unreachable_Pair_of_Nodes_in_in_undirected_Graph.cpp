#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int find(vector<int>&par,int x){
        if(x==par[x])return x;
        return par[x]=find(par,par[x]);
    }
    void uni(vector<int>&par,vector<int>&size,int a,int b){
        a=find(par,a);
        b=find(par,b);
        if (a != b) {
            par[b] = a;
            size[a]+=size[b];
            size[b]=0;

        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>par(n);
        vector<int>size(n,1);
        for(int i=0;i<n;i++)par[i]=i;
        for(int i=0;i<edges.size();i++){
            uni(par,size,edges[i][0],edges[i][1]);
        }
        long long ans=0;
        int rem=n;
        for(int i=0;i<n;i++){
            ans+=(long long)size[i]*(rem-size[i]);
            rem-=size[i];
        }
        return ans;
    }
};