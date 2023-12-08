// https://leetcode.com/problems/4sum/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int l=0;l<nums.size();l++){
            for(int i=l+1;i<nums.size();i++){
                int j=i+1,k=nums.size()-1;
                double sum=nums[l]+nums[i];
                while(j<k){
                    if(nums[j]+nums[k]==target-sum){
                        s.insert({nums[l],nums[i],nums[j],nums[k]});
                        j++;
                        k--;
                    }
                    else if(nums[j]+nums[k]>target-sum)k--;
                    else j++;
                }
            }
        }
        for(auto x:s)ans.push_back(x);
        return ans;
    }
};