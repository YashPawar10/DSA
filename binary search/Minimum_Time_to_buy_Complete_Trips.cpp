// https://leetcode.com/problems/minimum-time-to-complete-trips/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>&time,int totalTrips , long long reqtime){
        long long currtrip = 0;
        for(int i=0;i<time.size();i++){
            currtrip+=reqtime/time[i];
        }
        if(currtrip>=totalTrips)return true;
        return false;

    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int mn = INT_MAX;
        for(int x : time) mn = min(mn , x);
        long long lo=1;
        long long hi = (long long)mn*totalTrips;
        long long ans=-1;
        int cnt=0;
        while(lo<=hi){
            long long mid = lo + (hi - lo)/2;
            if(isPossible(time , totalTrips ,mid)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};