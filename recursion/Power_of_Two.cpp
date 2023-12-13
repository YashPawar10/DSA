// https://www.codingninjas.com/studio/problems/power-of-two_893061?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    // Write your code here.
    if (n == 1)
        return true;
    if (n % 2 != 0)
        return false;
    return isPowerOfTwo(n / 2);
}