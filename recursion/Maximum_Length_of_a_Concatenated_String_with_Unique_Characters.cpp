// https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkUniqueString(vector<int> &pickedchar, string s)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (pickedchar[s[j] - 'a'] > 0)
                return false;
            pickedchar[s[j] - 'a']++;
        }
        return true;
    }
    int helper(int i, vector<string> &arr, vector<int> pickedchar)
    {
        if (i == arr.size())
            return 0;

        // not pick
        int x = helper(i + 1, arr, pickedchar);

        // pick
        int y = 0;
        if (checkUniqueString(pickedchar, arr[i]))
        { // check for unique string
            y += helper(i + 1, arr, pickedchar) + arr[i].length();
        }
        else
        {
            for (int j = 0; j < arr[i].length(); j++)
            {
                if (pickedchar[arr[i][j] > 0])
                    pickedchar[arr[i][j] - 'a']--; // remove picked character as string are common
            }
        }
        return max(x, y);
    }
    int maxLength(vector<string> &arr)
    {
        vector<int> pickedchar(26, 0);
        return helper(0, arr, pickedchar);
    }
};