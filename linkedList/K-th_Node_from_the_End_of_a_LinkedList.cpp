// https://www.codingninjas.com/studio/problems/k-th-node-from-the-end-of-the-linked-list_1171164

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node *findKthFromLast(node *head, int k)
{
    // Write your Code Here
    node *back = head;
    node *front = head;
    for (int i = 0; i < k; i++)
    {
        front = front->next;
    }
    while (front)
    {
        front = front->next;
        back = back->next;
    }
    return back;
}