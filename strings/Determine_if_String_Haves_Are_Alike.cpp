// https://leetcode.com/problems/determine-if-string-halves-are-alike/description/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countVowel(string s){
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')cnt++;
        }
        return cnt;
    }
    bool halvesAreAlike(string s) {
        string a=s.substr(0,s.length()/2);
        string b=s.substr(s.length()/2);
        if(countVowel(a)==countVowel(b))return true;
        return false;
    }
};
