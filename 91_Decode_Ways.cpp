#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<long long>dp;
    long long f(string s,int i){
        if(s[i]=='0')return 0;
        if(i>=s.size()-1)return 1;    
        if(dp[i]!=-1)return dp[i];
        long long ans=f(s,i+1);
        if((s[i]-'0')*10+(s[i+1]-'0')<=26){
            ans+=f(s,i+2);
        }
        return dp[i]=ans;
    }
    int numDecodings(string s) {
        dp.resize(s.size()+1,-1);
        return f(s,0);
    }
};