// https://www.codingninjas.com/studio/problems/move-zeros-to-left_1094877?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
void swap(int *arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void moveZerosToLeft(int *arr, int n) 
{
    // Write your code here
    int j=n-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=0){
            swap(arr,i,j);
            j--;
        }
    }
}
