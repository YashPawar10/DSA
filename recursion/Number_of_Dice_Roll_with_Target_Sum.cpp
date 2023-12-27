// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/?envType=daily-question&envId=2023-12-26

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<long long>> dp;
    const int MOD = 1000000007;

    long long f(int n, int k, int target) {
        if (target == 0 && n == 0) {
            return 1;
        }
        if (target < 0 || n == 0) {
            return 0;
        }
        if (dp[n][target] != -1) {
            return dp[n][target];
        }

        long long ans = 0;
        for (int i = 1; i <= k; i++) {
            ans += f(n - 1, k, target - i);
            ans %= MOD;  
        }
        return dp[n][target] = ans;
    }

    int numRollsToTarget(int n, int k, int target) {
        dp.resize(n + 2, vector<long long>(target + 2, -1));
        return (f(n, k, target)); 
    }
};
