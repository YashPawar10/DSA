// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/?envType=daily-question&envId=2024-02-14

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    //3 
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int j=0,k=0;
        while(ans.size()<nums.size()){
            while(j<nums.size() && nums[j]<0)j++;
            ans.push_back(nums[j]);
            j++;
            if(ans.size()==nums.size())break;
            while(k<nums.size() && nums[k]>0)k++;
            ans.push_back(nums[k]);
            k++;
        }
        return ans;
    }
};