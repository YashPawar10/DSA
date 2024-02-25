#include<bits/stdc++.h>
using namespace std;

//6 3

int cnt=0;
int findPivot(vector<int>&v,int l, int r){
    int pivot = l;
    int i=l+1 ,j=r;
    while(j>=i){
        while(v[j]>v[pivot])j--;
        while(i<=r && v[i]<v[pivot])i++;
        if(j>i)swap(v[i],v[j]);
    }
    swap(v[pivot],v[j]);
    return j;
}

void quickSort(vector<int>&arr , int l ,int r ){
    if(l>=r)return;
    int pivot = findPivot(arr,l,r);
    quickSort(arr,l,pivot-1);
    quickSort(arr,pivot+1,r);
}

int main() {    
    int arr[] = {8,5,1};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    quickSort(v,0,n-1);
    for(auto x : v)cout<<x <<" ";
  return 0;
}