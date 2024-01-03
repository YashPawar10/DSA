// https://leetcode.com/problems/flood-fill/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    void helper(vector<vector<int>> &image, int sr, int sc, int color, int oldcolor)
    {
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || color == image[sr][sc])
            return; // basecase coordinate inside image dimention and already color
        if (image[sr][sc] == oldcolor)
            image[sr][sc] = color; // adjcent same color we have to color
        else
            return; // adjcent of different color
        for (int i = 0; i < dir.size(); i++)
        {
            helper(image, sr + dir[i][0], sc + dir[i][1], color, oldcolor); // 4directionally call
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        helper(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};