// https://www.codingninjas.com/studio/problems/total-negative-numbers-in-a-sorted-matrix_3161878?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;
int countNegativeNumbers(vector<vector<int>> &mat)
{
    // Write your code here.
    int cnt = 0;
    // for(int i=0;i<mat.size();i++){
    //     //m1-brute force n*m
    //     // for(int j=0;j<mat[0].size();j++){
    //     //     if(mat[i][j]<0){
    //     //         cnt+=mat[0].size()-j;
    //     //         break;
    //     //     }
    //     // }

    //     //m2-binary search n*logm
    //     int s=0,e=mat[0].size()-1,neg=e+1;
    //     while(s<=e){
    //         int mid=s+(e-s)/2;
    //         if(mat[i][mid]<0){
    //             neg=mid;
    //             e=mid-1;
    //         }
    //         else{
    //             s=mid+1;
    //         }
    //     }
    //     // cout<<neg<<" ";
    //     cnt+=mat[0].size()-neg;

    // }

    // m3-ladder n+m
    int i = 0, j = mat[0].size() - 1;
    while (i < mat.size())
    {
        if (mat[i][j] < 0)
        {
            cnt += mat.size() - i;
            j--;
        }
        else
        {
            i++;
        }
    }

    return cnt;
}