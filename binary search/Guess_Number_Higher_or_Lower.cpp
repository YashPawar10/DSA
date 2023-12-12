// https://leetcode.com/problems/guess-number-higher-or-lower/

#include <bits/stdc++.h>
using namespace std;

int guess(int x){
    return 1;       //only for tempary in questiong this function is hidden
}

class Solution {
public:
    int guessNumber(int n) {
        int lo=1,hi=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int ans=guess(mid);
            if(ans==0)return mid;
            else if(ans==-1)hi=mid-1;
            else lo=mid+1;
        }
        return -1;
    }
};