#include <bits/stdc++.h>
using namespace std;
class Stack 
{
    public:
    char s[20];
    int top , max ;
    Stack();
    void push(char t);
    char pop();
    int IsEmpty();
    char getTop();
    
}