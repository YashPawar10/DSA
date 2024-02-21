// https://leetcode.com/problems/sqrtx/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int lo=0,hi=x,ans=-1;
        while(lo<=hi){
            long long mid= lo+ (hi-lo)/2;
            cout<<mid<<" ";
            if(mid*mid == x)return mid;
            else if(mid*mid < x){
                ans = mid;
                lo= mid+1;
            }
            else hi = mid-1;
        }
        return ans;
    }
};