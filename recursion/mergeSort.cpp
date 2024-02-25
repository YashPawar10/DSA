#include<bits/stdc++.h>
using namespace std;

// 1 5 3 6 7
int cnt=0;
void merge(vector<int>&v,int l,int mid, int r){
    if(l>=r)return;
    int i=l,j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=r){
        if(v[i]<v[j]){
            temp.push_back(v[i++]);
        }
        else {
            temp.push_back(v[j++]);
        }
    }
    while(i<=mid)temp.push_back(v[i++]);
    while(j<=r)temp.push_back(v[j++]);
    j=0;
    for(i=l;i<=r;i++){
        v[i]=temp[j++];
    }
}

void mergeSort(vector<int>&arr , int l ,int r ){
    if(l>=r)return;
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

int main() {    
    int arr[] = {1,3,5,2,7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    mergeSort(v,0,n-1);
    for(auto x : v)cout<<x <<" ";
  return 0;
}