// https://leetcode.com/problems/merge-intervals/description/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static bool cmp(vector<int> v1, vector<int> v2)
    {
        return v1[0] < v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), cmp);
        int currSt = intervals[0][0];
        int currEnd = intervals[0][1];
        vector<vector<int>> ans;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][1] < currSt)
                ans.push_back({intervals[i][0], intervals[i][1]});
            else if (intervals[i][0] <= currEnd)
            {
                currSt = min(intervals[i][0], currSt);
                currEnd = max(intervals[i][1], currEnd);
            }
            else
            {
                ans.push_back({currSt, currEnd});
                currSt = intervals[i][0];
                currEnd = intervals[i][1];
            }
        }
        ans.push_back({currSt, currEnd});
        return ans;
    }
};
