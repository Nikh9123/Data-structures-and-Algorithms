// #include <iostream>
// // #define MAX 5;
// #define n 100
// using namespace std;
// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "overflow occurs" << endl;
//             return;
//         }
//         else
//         {
//             top++;
//             arr[top] = x;
//         }
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "underflow occurs" << endl;
//             return;
//         }
//         top--;
//     }
//     int Top()
//     {
//         if (top == -1)
//         {
//             cout << "no elements in stack " << endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     bool empty()
//     {
//         return top == -1;
//     }
// };
// int main()
// {
//     stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     cout << s.Top() << endl;
//     s.pop();
//     cout << s.Top() << endl;
//     s.pop();
//     s.pop();
//     s.pop();
//     cout << s.empty() << endl;
// }
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n = 16;
    for (int i = 1; i < n / 2; i++)
    {
        if (pow(2, i) == n)
        {
            cout << "yes ";
            break ;
        }
        else
        {
            cout << "No";
        }
    }
}