// https: // leetcode.com/problems/remove-element/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=nums.size()-1,j=nums.size()-1;
        while(j>=0  && nums[j]==val){
            j--;
            i--;
        }
        while(i>=0){
            while(i>=0 && nums[i]!=val)i--;
            if(i<0)break;
            swap(nums[i],nums[j]);
            j--;
        }
        return j+1;
    }
};