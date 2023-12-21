// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        for(int i=1;i<prices.size();i++){
            int x=prices[i]-prices[i-1];
            if(x>0)ans+=x;
        }
        return ans;
    }
};