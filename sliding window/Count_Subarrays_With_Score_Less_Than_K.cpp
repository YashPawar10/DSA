// https://leetcode.com/problems/count-subarrays-with-score-less-than-k/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& arr, long long k) {
        int i = 0, j = 0, n = arr.size();
        long long sum = 0, cnt = 0, score = 0;
        while(i < n){
            //2
            sum += arr[i];
            score = sum * (i - j + 1);
            while(j <= i && score >= k){
                cnt += (i - j);
                sum -= arr[j];
                j++;
                score = sum * (i - j + 1);
            }
            i++;
        }
        while(j < n){
            cnt += i - j;
            j++;
        }
        return cnt;
    }
};