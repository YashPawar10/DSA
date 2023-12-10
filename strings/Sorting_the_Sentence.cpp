// https://leetcode.com/problems/sorting-the-sentence/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string>v(10);
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')str="";
            else if(s[i]>='0' && s[i]<='9')v[s[i]-'0']=str;
            else str+=s[i];
        }
        str="";
        for(auto x:v)if(x!="")str+=" "+x;
        return str.substr(1);
    }
};