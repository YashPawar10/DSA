//https://www.codingninjas.com/studio/problems/majority-element_842495?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(auto x:m){
		if(x.second>n/2)return x.first;
	}
	return -1;
}