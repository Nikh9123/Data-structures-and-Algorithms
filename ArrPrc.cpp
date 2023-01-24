#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7 ;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7} ;
    int k = 2 ;
    int temp[k] ;
    // this looop is for storing element in temp array till k-1
    for (int i = 0; i < k; i++)
        temp[i] = arr[i] ;
    //this loop is shifting element by kth position
    for (int i = k; i < n; i++)
    {
        arr[i - 2] = arr[i];
    }
    for (int i = k; i > 0; i--)
    {
        arr[n - i] = temp[k - i];
    }
    // arr[n-2] = temp[0];
    // arr[n-1] = temp[1];
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
}