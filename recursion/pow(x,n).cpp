// https://leetcode.com/problems/powx-n/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1.0;
        double a=myPow(x,n/2);
        if(n>0){ //for +ve value of n
            if(n%2==0) return a*a;
            else return x*a*a;
        }
        else{//for -ve value of n
            if(n%2==0) return a*a;
            else return a*a/x;
        }
    }
};