using namespace std;
#include <bits/stdc++.h>
// #define max 50
class Queue
{
    int q[50], front, rear, max;

public:
    Queue();
    int IsEmpty();
    int IsFull();
    void Insert(int);
    int Delete();
};
Queue::Queue()
{
    max = 50;
    front = rear = -1;
}
int Queue ::IsEmpty()
{
    if (front == rear)
        return 1;
    else
    {
        return 0;
    }
}
int Queue ::IsFull()
{
    if (rear == max - 1)
        return 1;
    else
    {
        return 0;
    }
}
void Queue ::Insert(int t)
{
    if (IsFull())
    {
        cout << "sorry it's already full😅😅😅"
             << " " << endl;
    }
    else
    {
        rear++;
        int q[rear] = t;
    }
}
int Queue ::Delete()
{
    if (IsEmpty())
    {
        cout << "😢😢😢😒😒 empty hai pahle se " << endl;
    }
    else
    {
        front++;
        return q[front];
    }
}
int main()
{
    
}