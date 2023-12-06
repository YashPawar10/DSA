// https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?leftPanelTabValue=PROBLEM&count=25&page=20&search=&sort_entity=order&sort_order=ASC

#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int n=arr.size()-1;
    int s=0,s2=0;
    s=n*(n+1)/2;
    for(int i=0;i<n+1;i++){
        s2+=arr[i];
    }
    return s2-s;
	
}