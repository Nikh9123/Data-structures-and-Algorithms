#include <bits/stdc++.h>
using namespace std;
void printArrForward(int arr[] , int n)
{
    for(int i=0; i <n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void BubbleSort(int arr[] , int n)
{
    for(int i=0 ; i < n-1 ; i++)
    {
        for(int j=0; j < n-1-i ; j ++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    printArrForward(arr , n);
    }
void selectionSort(int arr[] ,int n)
{
    for(int i = 0 ; i < n-1 ; i ++)
    {
        for(int j = i +1 ; j < n ; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i] , arr[j]);
            }
        }
    }
    cout<<"sorted array"<<endl;
    printArrForward(arr , n);
}
int linearSearch(int arr[] , int n ,int key)
{

for(int i = 0 ; i < n; i++)
{
    if(arr[i] == key)
    {
        return i ;
    }

}
return -1 ;

}
int BinarySearch(int arr[] , int n, int key)
{
    int s = 0 ;
    int e = n-1 ;
    int mid = s + (e - s)/2 ;

    while( s <= e)
    {
      if(key == arr[mid])
      {
        return mid ;
      }
      else if(arr[mid] < key)
      {
        s = mid +1 ;
      }
      else 
      {
        e = mid-1 ;
      }

      mid = s + (e-s)/2 ;
 
    }
    return -1 ;
}
int main()
{
    int n = 6 ;
    int arr[n] = {40,30,50,60,10,20};
            cout<<"previous array was :";

    printArrForward(arr , n);
    cout<<endl;
    //insert at last of array 
    // cout<<"enter new element you want ti insert at last"<<endl;
    // int ele ;
    // cin>>ele;
    // n = n +1 ;
    // arr[n-1] = ele ;
    // cout<<"after inserting element :";
    // printArr(arr,n);

    //inserting at begining of array 
    // n = n +1 ;
    // for(int i=n-1; i >= 0;i--)
    // {
    //     arr[i+1] = arr[i];
    // }
    // n = n+1 ;
    // cout<<"enter the element you want to insert at begining of array"<<endl;
    // int Fele;
    // cin>>Fele;
    // arr[0] = Fele ;
    // printArrForward(arr , n);
    // selectionSort(arr , n);
    BubbleSort(arr, n);
    // cout<<"element you want to search "<<endl;
    // int key ;
    // cin>>key;
    // cout<<BinarySearch(arr , n , key);
    // cout<<linearSearch(arr , n , key);


}