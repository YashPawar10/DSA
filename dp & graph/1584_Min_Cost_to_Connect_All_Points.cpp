#include <bits/stdc++.h>
using namespace std;
#define p pair<int, pair<int, int>>
class Solution {
public:
    int find(vector<int>&par,int x){
        if(par[x]==x)return x;
        return par[x]=find(par,par[x]);
    }
    bool uni(vector<int>&par,int a,int b){
        a=find(par,a);
        b=find(par,b);
        if(a==b)return true;
        if(a!=b)par[b]=a;
        return false;
    }

    int kruskal(vector<int> &par, priority_queue<p, vector<p>, greater<p>> &q)
    {
        int ans=0;
        while (!q.empty()){
            int src=q.top().second.first;
            int des = q.top().second.second;
            int wt=q.top().first;
            bool isCycle=uni(par,src,des);
            if (!isCycle)ans+=wt;
            q.pop();
        }
        return ans;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<int>par(n);
        for(int i=0;i<n;i++)par[i]=i;
        priority_queue<p,vector<p>,greater<p>>q;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int w=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                q.push({w,{i,j}});
            }
        }
        return kruskal(par,q);
    }
};