// https://leetcode.com/problems/product-of-array-except-self/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zcnt=0,prod=1;
        for(auto x:nums){
            if(x==0)zcnt++;
            else prod*=x;
        }
        for(int i=0;i<nums.size();i++){
            if(zcnt>1)nums[i]=0;
            else if(zcnt==1){
                if(nums[i]==0)nums[i]=prod;
                else nums[i]=0;
            }
            else nums[i]=prod/nums[i];
        }
        return nums;

    }
};