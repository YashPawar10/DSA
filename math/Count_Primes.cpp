// https://leetcode.com/problems/count-primes/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        if (n < 2)
            return 0;
        vector<bool> v(n, true);
        v[0] = false;
        v[1] = false;
        for (int i = 2; i <= sqrt(n); i++)
        {
            for (int j = i * i; j < n; j += i)
            {
                v[j] = false;
            }
        }
        int cnt = 0;
        for (int i = 2; i < n; i++)
        {
            if (v[i] == true)
                cnt++;
        }
        return cnt;
    }
};