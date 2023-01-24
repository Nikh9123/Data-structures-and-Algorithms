using namespace std;
#include <bits/stdc++.h>
class node
{
public:
    int data;
    node *link;
};
class stack1
{
public:
    node *top;
    stack1();
    void push(int t);
    int pop();
};
stack1::stack1()
{
    top = NULL;
}
void stack1 ::push(int data)
{
    node *temp = new node();
    if (temp == NULL)
    {
        cout << "stack overflow" << endl;
        // return -1;
    }
    else
    {
        temp->data = data;
        temp->link = NULL;
        
        if (top == NULL)
        {
            top = temp;
        }
        else
        {
            temp->link = top;
            top = temp;
        }
    }
}
int stack1 ::pop()
{
    int x;
    node *temp = top;
    if (temp == NULL)
    {
        cout << "underflow stack" << endl;
        return -1;
    }
    else
    {
        x = temp->data;
        top = top->link;
        delete temp;
        return x;
    }
}
int main()
{
    stack1 s;
    s.push(12);
    s.push(15);
    s.push(18);
    s.push(21);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}