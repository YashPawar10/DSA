// https://leetcode.com/problems/reducing-dishes/description/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    //-9 -8 -1 0 5
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        if(satisfaction[n-1]<0)return 0;
        vector<int>post(n);
        post[n-1]=satisfaction[n-1];
        int i;
        for(i=n-2;i>=0;i--){
            post[i]=post[i+1]+satisfaction[i];
            if(post[i]<0)break;
        }
        int ans=0,multiple =1;
        for(i=i+1;i<n;i++){
            ans+=satisfaction[i]*multiple++;
        }
        return ans;
    }
};
