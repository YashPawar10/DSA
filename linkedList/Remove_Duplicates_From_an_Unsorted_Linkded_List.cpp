// https://www.codingninjas.com/studio/problems/remove-duplicates-from-unsorted-linked-list_1069331?leftPanelTabValue=PROBLEM

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

Node *removeDuplicates(Node *head)
{
    // Write your code here
    if(head==NULL || head->next==NULL)return head;
    unordered_set<int>s;
    Node* temp=head;
    while(temp  && temp->next){
        
        s.insert(temp->data);
        while(s.find(temp->next->data) != s.end()) {
          temp->next = temp->next->next;
          if(temp->next==NULL)break;
        }
        temp=temp->next;
    }
    return head;
}