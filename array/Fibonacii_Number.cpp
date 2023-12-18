// https://leetcode.com/problems/fibonacci-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1)return n;
        int a=0,b=1,c;
        for(int i=2;i<=n;i++){ 
            c=a+b;  //c=ith pivot element
            a=b;
            b=c;
        }
        return c;
    }
};