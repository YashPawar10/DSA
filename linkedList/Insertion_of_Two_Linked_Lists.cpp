// https://www.codingninjas.com/studio/problems/intersection-of-linked-list_630457?leftPanelTabValue=PROBLEM

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
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node * temp=firstHead;
    int len1=0,len2=0;
    while(temp){
        temp=temp->next;
        len1++;
    }
    temp=secondHead;
    while(temp){
        temp=temp->next;
        len2++;
    }
    if(len1>len2){
        for(int i=0;i<(len1-len2);i++){
            firstHead=firstHead->next;
        }
    }
    else{
        for(int i=0;i<(len2-len1);i++){
            secondHead=secondHead->next;
        }
    }
    while(firstHead){
        if(firstHead==secondHead)return firstHead;
        firstHead=firstHead->next;
        secondHead=secondHead->next;
    }
    return NULL;
}

