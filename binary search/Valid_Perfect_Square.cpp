// https://www.codingninjas.com/studio/problems/valid-perfect-square_1082552?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
bool isPerfectSquare(long long n) {
	// Write your code here.
	long long lo=1,hi=n;


	while(lo<=hi){
		long long mid=lo+(hi-lo)/2;
		if(mid*mid==n)return true;
		else if(mid*mid>n)hi=mid-1;
		else lo=mid+1;
	}
	return false;

}