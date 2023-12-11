//https://www.codingninjas.com/studio/problems/reverse-the-string_799927?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
string reverseString(string str)
{
	int i=0,j=str.length()-1;
	while(i<j){
		swap(str[i],str[j]);
		i++;
		j--;
	}
	return str;
}