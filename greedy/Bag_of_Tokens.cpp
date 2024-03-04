// https://leetcode.com/problems/bag-of-tokens/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0)return 0;
        sort(tokens.begin(),tokens.end());
        if(tokens[0]>power)return 0;
        int left=0,right=tokens.size()-1;
        int score = 0;
        int mxscore = 0;
        while(left<=right){
            if(tokens[left]<=power){
                score++;
                power -= tokens[left];
                left++;
                mxscore = max(score, mxscore);
            }
            else if(score > 0){
                score--;
                power += tokens[right];
                right--;
            }
            else break;
        }
        return mxscore;
    }
};