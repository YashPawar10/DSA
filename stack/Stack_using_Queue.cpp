// https://www.codingninjas.com/studio/problems/stack-using-queue_795152?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

class Stack {
   public:
    queue<int>q1;
    queue<int>q2;
    Stack() {
        
    }


    int getSize() {
       return q1.size();
    }

    bool isEmpty() {
        return q1.empty();
    }

    void push(int element) {
        while(!q1.empty()){
            int x=q1.front(); //move all element in q2
            q1.pop();
            q2.push(x);
        }
        q1.push(element);  //inset in front of q1
        while (!q2.empty()) {
        int x = q2.front();  //move all element of q2 in q1
        q2.pop();                    
        q1.push(x);
        }
    

    }

    int pop() { 
        if(q1.empty())return -1;  
        int x=q1.front();
        q1.pop();
        return x;
    }

    int top() {
        if(q1.empty())return -1;
        return q1.front();
    }
};