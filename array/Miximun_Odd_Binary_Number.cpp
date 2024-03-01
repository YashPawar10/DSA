// https://leetcode.com/problems/maximum-odd-binary-number/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zcnt = 0,ocnt =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')zcnt++;
            else ocnt++;
        }
        string ans="";
        for(int i=1;i<ocnt;i++)ans+='1';
        for(int i=1;i<=zcnt;i++)ans+='0';
        ans+='1';
        return ans;

    }
};