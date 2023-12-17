// https://leetcode.com/problems/next-greater-element-i/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int loc=nums2.size(); //to trace location of next greater element
            bool flag=0;//whether we find next greater element or not
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])loc=j;
                if(j>loc  && nums2[j]>nums1[i]){  //element is greater as well is its location is greater
                    ans.push_back(nums2[j]);
                    flag=1;
                    break;
                }
            }
            if(flag==0)ans.push_back(-1); //not find next greater element
        }
        return ans;
    }
};