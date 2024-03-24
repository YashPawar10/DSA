// https://leetcode.com/problems/number-of-visible-people-in-a-queue/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int>ans(n, 0);
        stack<int>st;
        for(int i = n - 1; i >= 0; i--){
            if(i == n - 1)st.push(heights[n-1]);
            else{
                int cnt = 1;
                while(!st.empty() && st.top() <= heights[i]){
                    st.pop();
                    cnt++;
                }
                if(st.empty())ans[i] = cnt - 1;
                else if(cnt == 0)ans[i] = 1;
                else ans[i] = cnt;
                st.push(heights[i]);
            }
        }
        return ans;
    }
};