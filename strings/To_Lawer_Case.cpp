// https://leetcode.com/problems/to-lower-case/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]<='Z' && s[i]>='A'){
                s[i]=(char)(s[i]+'a'-'A');
            }
        }
        return s;
    }
};