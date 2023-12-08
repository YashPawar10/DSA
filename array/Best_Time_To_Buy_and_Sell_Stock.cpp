// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int mxprofit=0;
        int mi=arr[0];
        for(int i=1;i<n;i++){
            mxprofit=max(mxprofit,arr[i]-mi);
            mi=min(mi,arr[i]);
        }
        return mxprofit;
    }
};