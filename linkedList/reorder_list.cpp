// https://leetcode.com/problems/reorder-list/

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:

    ListNode* reverse(ListNode* head) {
        if(!head || !head -> next)return head;
        ListNode* newHead = reverse(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return newHead;
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast -> next && fast -> next -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* l2 = slow -> next;
        slow -> next = NULL; 

        l2 = reverse(l2);
        ListNode* l1 = head -> next;
        ListNode* temp = head;
        
        while(l2){
            temp -> next = l2;
            l2 = l2 -> next;
            temp = temp -> next;
            if(!l1)break;
            temp -> next = l1;
            temp = temp -> next;
            l1 = l1 -> next;
        }
    }
};