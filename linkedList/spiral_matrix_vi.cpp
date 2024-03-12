// https://leetcode.com/problems/spiral-matrix-iv/description/

#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m, vector<int>(n, -1));
        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;
        while(minr <= maxr && minc <= maxc){
            for(int i = minc; i <= maxc ; i++){
                if(head){
                    ans[minr][i] = head -> val;
                    head = head -> next;
                }
                else return ans;
            }
            minr++;
            for(int i = minr; i <= maxr ; i++){
                if(head){
                    ans[i][maxc] = head -> val;
                    head = head -> next;
                }
                else return ans;
            }
            maxc--;
            for(int i = maxc; i >= minc ; i--){
                if(head){
                    ans[maxr][i] = head -> val;
                    head = head -> next;
                }
                else return ans;
            }
            maxr--;
            for(int i = maxr; i >= minr ; i--){
                if(head){
                    ans[i][minc] = head -> val;
                    head = head -> next;
                }
                else return ans;
            }
            minc++;

        }

        return ans;
    }
};