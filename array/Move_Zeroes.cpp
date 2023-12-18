// https://leetcode.com/problems/move-zeroes/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)return;
        int i=0,j=0;//till i no zero &&  j for traversal
        while(j<nums.size()){
            if(nums[j]==0)j++; 
            else if(nums[j]!=0){  
                int temp=nums[i]; //non zero element swap with i & i++,j++
                nums[i]=nums[j];
                nums[j]=temp;
                j++;i++;
            }
        }
    }
};