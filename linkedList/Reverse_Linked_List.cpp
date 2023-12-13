// https://www.codingninjas.com/studio/problems/reverse-the-singly-linked-list_799897?leftPanelTabValue=SOLUTION

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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL)return NULL;
    if(head->next==NULL)return head;
    LinkedListNode<int> *newHead=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
    return head;

}