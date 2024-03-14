// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/

#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(!head || !head -> next)return head;
        ListNode* newHead = reverse(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return newHead;
    }
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast -> next && fast -> next -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* l2 = reverse(slow -> next);
        slow -> next = NULL;
        ListNode* l1 = head;
        int maxTwinsum = 0;
        while(l1){
            maxTwinsum = max(maxTwinsum, l1 -> val + l2 -> val);
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        return maxTwinsum;

    }
};