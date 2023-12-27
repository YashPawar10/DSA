// https://leetcode.com/problems/partition-to-k-equal-sum-subsets/description/

#include <bits/stdc++.h>
using namespace std;

//not comple solution require dp to solve it

class Solution {
public:
    bool helper(int i,vector<int>&nums,int k,vector<int>&vis,int currBucketSum,int partitionSum){
        if(k==0 && i==nums.size());return true;
        if(currBucketSum==partitionSum) return helper(0,nums,k-1,vis,0,partitionSum); 
    
        if(k<0 || i>=nums.size())return false;
        if(currBucketSum>partitionSum)return false;
        if(vis[i]==1) return helper(i+1,nums,k,vis,currBucketSum,partitionSum);//already consider
      
        bool ans=false;
        vis[i]=1;
        ans=ans || helper(i+1,nums,k,vis,currBucketSum+nums[i],partitionSum);//consider;
        vis[i]=0;
    
        ans=ans || helper(i+1,nums,k,vis,currBucketSum,partitionSum);  //skip
        

        return ans;
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=0;
        for(auto x:nums)sum+=x;
        if(sum % k!=0)return false;
        int partitionSum=sum/k;
        vector<int>vis(nums.size(),0);
        return helper(0,nums,k,vis,0,partitionSum);
    }
};