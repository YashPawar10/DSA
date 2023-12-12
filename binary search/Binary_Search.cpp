//https://www.codingninjas.com/studio/problems/binary-search_972?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target) {
    // Write your code here.
    int lo=0,hi=nums.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target)return mid;
        if(nums[mid]<target)lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}