// https://www.codingninjas.com/studio/problems/cycle-detection-in-a-singly-linked-list_628974?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

bool detectCycle(Node *head)
{
	//	Write your code here
    Node *slow=head,*fast=head->next;
    while(fast && fast->next){
        if(slow==fast)return true;
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;
}