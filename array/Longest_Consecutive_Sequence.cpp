// https://www.codingninjas.com/studio/problems/longest-consecutive-sequence_759408?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTubeshrt_Frazcodestudio30thOct&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int mxlen=1;
    //m1-sort arr
    // sort(arr.begin(),arr.end());
    //for(auto x:arr)cout<<x<<" ";
    // int i=0;
    // int len=1;
    // //0,1,1,2
    // for(int i=1;i<n;i++){
    //     if(arr[i-1]+1==arr[i]){
    //         len++;
    //     }
    //     else if(arr[i-1]==arr[i])continue;
    //     else{
    //         len=1;
    //     } 
    //     mxlen=max(mxlen,len);
    // }
    // return mxlen;


    //m2-unordered set
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        int next=arr[i]+1;
        int len=1;
        if(s.find(arr[i]-1)!=s.end())continue;
        while(s.find(next)!=s.end()){
            len++;next++;
        }
        mxlen=max(len,mxlen);
    }
    return mxlen;
}