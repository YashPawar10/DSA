// https://www.codingninjas.com/studio/problems/find-peak-element_1081482?leftPanelTabValue=PROBLEM&count=25&page=11&search=&sort_entity=order&sort_order=ASC

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n=arr.size();
    if(n==1)return 0;
    if(arr[1]<arr[0])return 0;
    if(arr[n-1]>arr[n-2])return n-1;
    int lo=0,hi=n-1;
    int ans=1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid-1]>arr[mid])hi=mid-1;
        else if(arr[mid]<arr[mid+1])lo=mid+1;
        else return mid;
    }
    return ans;
}
