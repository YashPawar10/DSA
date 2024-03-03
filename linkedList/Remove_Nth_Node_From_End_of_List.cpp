// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/?envType=daily-question&envId=2024-03-03

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next)return NULL;
        ListNode* front = head;
        for(int i=0;i<n;i++)front= front->next;
        if(!front)return head->next;
        ListNode* back = head;
        while(front->next){
            front = front->next;
            back = back->next;
        }
        back->next= back->next->next;
        return head;
    }
};