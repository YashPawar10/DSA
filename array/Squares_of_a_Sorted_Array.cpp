// https://leetcode.com/problems/squares-of-a-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<int>ans(j+1);
        for(int k=nums.size()-1;k>=0;k--){
            if(abs(nums[i])>abs(nums[j])){
                ans[k]=nums[i]*nums[i];
                i++;
            }
            else {
                ans[k]=nums[j]*nums[j];
                j--;
            }
        }
        return ans;
    }
};