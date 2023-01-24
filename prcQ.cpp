using namespace std;
#include <bits/stdc++.h>
class stack1
{
    int q[50];
    int max, rear, front;

public:
    stack1();
    int IsEmpty();
    int Isfull();
    void Insert(int);
    int Delete();
};
stack1 ::stack1()
{
    max = 50;
    front = rear = -1;
}
int stack1 ::IsEmpty()
{
    if (rear == front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stack1 ::Isfull()
{
    if (rear == max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void stack1 ::Insert(int t)
{
    if (!Isfull())
    {
        rear++;
        q[rear] = t;
    }
    else
    {
        cout << "Queue is Full" << endl;
    }
}
int stack1 ::Delete()
{
    if (IsEmpty())
    {
        cout << "UnderFlow Queue is empty" << endl;
    }
    else
    {
        front++;
        return q[front];
    }
}
int main()
{
    stack1 s;
    for (int i = 1; i <= 10; i++)
    {
        s.Insert(i * 6);
    }
    for (int j = 1; j <= 10; j++)
    {
        cout << s.Delete();
    }
}