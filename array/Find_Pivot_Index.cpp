// https://leetcode.com/problems/find-pivot-index/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1]; //prefix sum
        }
        for(int i=0;i<n;i++){
            if(i==0 && nums[n-1]-nums[i]==0)return i;//0th element
            else if(i==n-1 && nums[n-2]==0)return n-1;//last element
            else if(i>0 &&  nums[i-1]==(nums[n-1]-nums[i]))return i; //rest element check left and right sum
        }
        return -1; //not found
    }
};