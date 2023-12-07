// https://leetcode.com/problems/flipping-an-image/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<(n+1)/2;j++){
                int temp=image[i][j]^1;
                image[i][j]=image[i][n-1-j]^1;
                image[i][n-1-j]=temp;
            }
        }
        return image;
    }
};

