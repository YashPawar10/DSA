// https://www.codingninjas.com/studio/problems/remove-all-nodes-with-value-k_1262145?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *removeNodes(Node *head, int k) {
    // Write your code here.
    Node* dummy=new Node(-1);
    dummy->next=head;
    Node* temp=dummy;
    while(temp){
        while(temp->next && temp->next->data==k)temp->next=temp->next->next;
        temp=temp->next;
    }
    return dummy->next;
}