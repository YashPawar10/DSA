// https://www.codingninjas.com/studio/problems/find-power-of-a-number_893198?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    // Write your code here. 
    if(N==0)return 1;
    if(N==1)return X;
    return X*Pow(X,N-1);
}