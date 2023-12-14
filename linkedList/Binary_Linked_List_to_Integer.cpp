// https://www.codingninjas.com/studio/problems/binary-to-integer_2421938?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

int binaryToInteger(int n, Node *head) {
    //    Write your code here
    int ans=0;
    Node* temp=head;
    while(temp){
        ans=ans*2+temp->data;
        temp=temp->next;
    }
    return ans;
}