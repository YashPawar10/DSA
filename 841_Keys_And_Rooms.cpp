#include <vector>
#include<queue>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int>vis;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int cur=q.front();q.pop();
            vis.insert(cur);
            for(auto nb:rooms[cur]){
                if(vis.find(nb)==vis.end())q.push(nb);
            }
        }
        return (rooms.size()==vis.size());
    }
};