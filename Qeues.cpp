#include <bits/stdc++.h>
using namespace std;
class queue1
{
    int q[50];
    int front, rear, max;

public:
    queue1();
    int IsEmpty(); // 0 =- false , 1 for = true
    int IsFull();  // 0 - false , 1 - true
    void Insert(int);
    int Delete();
};
queue1 ::queue1()
{
    front = rear = -1;
    max = 50;
}

int queue1 ::IsEmpty()
{
    if (front == rear)
        return 1;
    else
        return 0;
}
int queue1 ::IsFull()
{
    if (rear == max - 1)
        return 1; // true
    else
    {
        return 0; // false
    }
}

void queue1 ::Insert(int t)
{
    // if(!IsFull()) //1 or 0
    // {
    //     rear++ ;
    //     q[rear] = t ;
    // }
    // else {
    //     cout<<"queue is Full"<<endl;

    // }
    if (rear == max - 1)
    {
        cout << "queue is Full" << endl;
    }
    else
    {
        rear++;
        q[rear] = t;
    }
}
int queue1 ::Delete()
{
    if (!IsEmpty())
    {
        return q[++front];
    }
    else
    {

        cout << "queue is empty" << endl;
        return -1 ;
    }
}
int main()
{
    queue1 qq;
//    cout << qq.IsEmpty() << " " << endl;
//    cout << qq.IsFull() << " ";
//    cout << endl;
for(int i=0 ; i<=10 ; i++)
{
	qq.Insert(i*2);
}
    for(int i=0 ; i<=10 ; i++)
{
	cout<<qq.Delete()<<endl;
}
//    cout << qq.Delete() << endl;
//    cout << qq.Delete() << endl;
//    cout << qq.Delete() << endl;
//    cout << qq.Delete() << endl;
//    cout << qq.Delete() << endl;

}
