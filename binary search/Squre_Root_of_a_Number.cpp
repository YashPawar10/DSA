// https://www.codingninjas.com/studio/problems/square-root-integral_893351?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    // Write your code here.
    // if(n==0)return 0;
    // int ans=1;
    // while(ans*ans<=n){
    //     ans++;
    // }
    // return ans-1;

    int i=0,j=n;
    int ans;
    while(i<=j){
        long long mid=i+(j-i)/2;
        if(mid*mid==n)return mid;
        if(mid*mid>n)j=mid-1;
        else{
            i=mid+1;
            ans=mid;
        }
    }
    return ans;

}
