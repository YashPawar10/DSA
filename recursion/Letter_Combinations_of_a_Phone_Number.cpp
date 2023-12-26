// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string>v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    void helper(string digit,int j,string &s){
        if(j==digit.size()){
            ans.push_back(s);
            return;
        }
        int num=digit[j]-'0';
        string str=v[num];
        cout<<str;
        for(int i=0;i<str.length();i++){
            string temp=s;
            s+=str[i];
            helper(digit,j+1,s);
            s=temp;
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        string s="";
        helper(digits,0,s);
        return ans;
    }
};