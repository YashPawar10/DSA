// https://www.codingninjas.com/studio/problems/palindrom-linked-list_799352?leftPanelTab=0&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int>* reverse(LinkedListNode<int> *head){
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *next=head;
    while(curr){
        next=next->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL)return true;
    LinkedListNode<int> *slow=head,*fast=head;
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    LinkedListNode<int> *temp1=head;
    LinkedListNode<int> *temp2=reverse(slow->next);
    slow->next=NULL;
    while (temp1 && temp2) {
        if (temp1->data != temp2->data)
          return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}