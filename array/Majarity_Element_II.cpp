// https://www.codingninjas.com/studio/problems/majority-element-ii_893027?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTubeshrt_Frazcodestudio30thOct&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int>ans;
    unordered_map<int,int>m;
    for(auto x:arr)m[x]++;
    for (auto x : m) {
      if (x.second > arr.size() / 3) {
        ans.push_back(x.first);
      }
    }
    return ans;

}