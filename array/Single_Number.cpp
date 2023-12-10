// https://www.codingninjas.com/studio/problems/occurs-once_1214969?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

int occursOnce(vector<int> &a, int n){
	// Write your code here.
	int ans=0;
	for(int i=0;i<n;i++){
		ans^=a[i];
	}
	return ans;
	
}
