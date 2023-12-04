// https://www.codingninjas.com/studio/problems/two-sum_839653

#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	sort(arr.begin(),arr.end());
	vector<pair<int,int>>v;
	int i=0,j=n-1;
	bool f=false;
	while(i<j){
		if(arr[i]+arr[j]==target){
			v.push_back({arr[i],arr[j]});
			f=true;
			i++;
			j--;
		}
		else if(arr[i]+arr[j]<target)i++;
		else j--;
	}
	if(f==false)v.push_back({-1,-1});

	return v;

}
