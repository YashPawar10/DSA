// https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/?envType=daily-question&envId=2024-01-23

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>vis;
    int helper(vector<string>&arr,int i){
        if(i==arr.size())return 0;
        bool flag = false;
        for(int j=0;j<arr[i].size();j++){
            vis[arr[i][j]-'a']++;
            if(vis[arr[i][j]-'a']>1)flag = true;
        }
        int picked=helper(arr,i+1)+arr[i].length();
        for(int j=0;j<arr[i].size();j++){
            vis[arr[i][j]-'a']--;
        }
        int notPicked = helper(arr,i+1);
        if(flag==true)return notPicked;
        int ans=max(notPicked,picked);
        return ans;

    }
    int maxLength(vector<string>& arr) {
        vis.resize(26,0);
        return helper(arr,0);

    }
};