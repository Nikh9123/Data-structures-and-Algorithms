#include <iostream>
using namespace std;
#define max 5
class stack
{
public:
    int a[max], top;
    stack();
    void push(int);
    int pop();
};
stack::stack()
{
    top = -1; // matlab ki av stacks empty hai
}
void stack::push(int t)
{
    if (top == max - 1) // overflow
    {
        cout << "OVERFLOW" << endl;
    }
    else
    {
        a[++top] = t;
    }
}
int stack ::pop()
{
    if (top == -1) // underflow
    {
        cout << "stack is empty" << endl;
    }
    return a[top--];
}

int main()
{
    stack s;
    // s.pop();
    s.push(1);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(90);
    // cout << s.pop() << endl;
    // cout << s.pop() << endl;
}