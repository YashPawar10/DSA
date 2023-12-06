#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<list<int>>graph;
    vector<int>indegre;
    void addedge(int s,int d){
        graph[s].push_back(d);
        indegre[d]++;
    }
    bool topo(){
        int cnt=0;
        queue<int>q;
        for(int i=0;i<indegre.size();i++){
            if(indegre[i]==0)q.push(i);
        }
        while ((!q.empty())){
            int x=q.front();q.pop();
            cnt++;
            for(auto nb:graph[x]){
                indegre[nb]--;
                if(indegre[nb]==0)q.push(nb);
            }
        }
        if(cnt==graph.size())return true;
        return false;
        
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int v=numCourses;
        int e=prerequisites.size();
        if(e==0)return true;
        indegre.resize(v,0);
        graph.resize(v,list<int>());
        for(int i=0;i<e;i++){
            int s=prerequisites[i][1],d=prerequisites[i][0];
            addedge(s,d);
        }
        return topo();
    }
};