// https://leetcode.com/problems/3sum/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// `-4,-1,-1,0,1,2

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<nums.size()-1 && nums[j]==nums[j+1])j++;
                    while(k>j && nums[k]==nums[k-1])k--;
                    j++;
                    k--;
                }
                else if(sum>0) k--;
                else j++;
            }
            while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        }

        return ans;
    }
};