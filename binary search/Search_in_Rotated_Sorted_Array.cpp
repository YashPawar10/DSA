// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            cout<<nums[mid]<<" "<<nums[lo]<<" "<<nums[hi]<<endl;
            if(nums[mid]==target)return mid;
            else if(nums[lo] <= nums[mid]){ //left sorted
                if(target < nums[mid] && target >= nums[lo])hi=mid-1;
                else lo=mid+1;
            }
            else{ //right sorted
                if(nums[mid]<target && target<= nums[hi])lo=mid+1;
                else hi=mid-1;
            }
        }
        return -1;
    }
};

//6 7 0 1 2 5
