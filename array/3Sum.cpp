// https://leetcode.com/problems/3sum/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<nums.size();i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]==-nums[i]){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]>-nums[i])k--;
                else j++;
            }
        }
        for(auto x:s)ans.push_back(x);
        return ans;
    }
};