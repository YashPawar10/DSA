#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_set<int>vis;
    vector<vector<int>>graph;
    void bfs(int st){
        queue<int>q;
        q.push(st);
        while(!q.empty()){
            int cur=q.front();q.pop();
            for(int i=1;i<graph.size();i++){
                int x=graph[cur][i];
                if(x==1 && vis.find(i)==vis.end()){
                    vis.insert(i);
                    q.push(i);
                }
            }
        }
        
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        graph=isConnected;
        int cnt=0;
        for(int i=0;i<isConnected.size();i++){
           if (vis.find(i)==vis.end()){
               bfs(i);
               cnt++;
           }
        }
        return cnt;;
    }
};