// https://leetcode.com/problems/valid-palindrome/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){ //for removing non alphanumbers characters
            if(s[i]>='a' && s[i]<='z')ans+=s[i];//add small case character
            if(s[i]>='0' && s[i]<='9')ans+=s[i];//add numbers
            else if(s[i]>='A' && s[i]<='Z')ans+=(char)(s[i]+('a'-'A'));//make capital letter small
        }
        s=ans;
        reverse(s.begin(),s.end());
        return s==ans;
    }
};