// https://leetcode.com/problems/prime-in-diagonal/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n){
        if(n==1)return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int mxPrime = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i]))mxPrime = max(mxPrime, nums[i][i]);
            if(isPrime(nums[i][n-1-i]))mxPrime = max(mxPrime, nums[i][n-1-i]);
        }
        return mxPrime;
    }
};