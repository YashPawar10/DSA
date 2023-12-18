// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)return 1;
        int i=0,j=0,cur=nums[0];
        while(j<nums.size()){
            while(j<nums.size() && cur==nums[j])j++; //same number j++
            nums[i]=cur;  //move new number at ith location
            i++;
            cur=nums[j]; //new number
        } 
        for(auto x:nums)cout<<x<<" ";
        return i;
    }
};