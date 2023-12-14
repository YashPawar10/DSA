// https://www.codingninjas.com/studio/problems/merge-two-sorted-linked-lists_800332?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
        }
    }
 };

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* a=first;
    Node<int>* b=second;
    Node<int>* head=new Node<int>(-1);
    Node<int>* temp=head;
    while(a && b){
        if(a->data<b->data){
            temp->next=a;
            a=a->next;
            temp=temp->next;
            temp->next=NULL;
        }
        else{
            temp->next=b;
            b=b->next;
            temp=temp->next;
            temp->next=NULL;
        }
    }
    if(a==NULL){
        temp->next=b;
    }
    else{
        temp->next=a;
    }
    return head->next;
}