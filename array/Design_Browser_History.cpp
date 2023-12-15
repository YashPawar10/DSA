// https://www.codingninjas.com/studio/problems/browser_2427908

#include <bits/stdc++.h>
using namespace std;

class Browser
{
    public:
    vector<string>arr;
    int pos;//track curr location
    int end;//end location
    
    Browser(string &homepage)
    {
        // Write you code here
        arr.push_back(homepage);
        pos=0;//initalization
        end=0;

    }

    void visit(string &url)
    {
        // Write you code here
        pos++;
        if (arr.size() == pos) {//already at last page
          arr.push_back(url);
        } 
        else arr[pos] = url;//in between
        end=pos;//clear next visited page

    }

    string back(int steps)
    {
        // Write you code here
        pos=max(0,pos-steps);//reture home page if we not able to more back
        return arr[pos];
        
    }

    string forward(int steps)
    {
        // Write you code here
        pos=min(end,pos+steps);//return ending page if not able to go forward
        return arr[pos];


    }
};
