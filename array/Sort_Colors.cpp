// https://leetcode.com/problems/sort-colors/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //[0,0,1i,1kj,2,2];
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=nums.size()-1;
        while(j<=k){
            if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else if(nums[j]==1)j++;
            else {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
    }
};