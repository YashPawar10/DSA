// https://www.codingninjas.com/studio/problems/delete-node-in-ll_5881?leftPanelTabValue=PROBLEM

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

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	if(head==NULL)return head;
	if(pos==0)return head->next;
	Node* temp=head;
	for(int i=0;i<pos-1;i++){
		if(temp->next)temp=temp->next;
	}
	if(temp->next)temp->next=temp->next->next;
	return head;
}
