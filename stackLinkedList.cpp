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
    node *top;

public:
    stack1();
    void push(int t);
    int pop();
    int IsEmoty();
    int GEtTop();
};
stack1 ::stack1()
{
    top = NULL;
}
void stack1 ::push(int t)
{
    node *temp = new node();
    if (temp == NULL)
    {
        cout << "overflow" << endl;
    }
    else
    {
        temp->data = t;
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
    if (top == NULL)
    {
        cout << "underflow occurs" << endl;
    }
    else
    {
        x = top->data;
        top = top->link;
        delete temp;
    }
    return x;
}
int main()
{
    stack1 s;
    s.push(5);
    s.push(15);
    s.push(8);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}
