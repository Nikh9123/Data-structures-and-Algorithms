using namespace std;
#include <bits/stdc++.h>
void selectionSort(int arr[] , int n)
{
    for(int i=0;i < n-1 ;i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i] , arr[j]);
            }
        }
    }
}
void bubbleSort(int arr[] , int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        for(int j = 0; j < n-i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
void insertionSort(int arr[] ,int n)
{
    for(int i=1 ;i , n ;i++)
    {
      int temp = arr[i] ;
      int j =i-1 ;
      for(; j >= 0; j--)
      {
        if(temp < arr[j])
         arr[j+1] = arr[j];
        
        else 
        {
            break ;
        }

      }
arr[j+1] = temp ;
    }
}
int main()
{
    int arr[5] = {12,4,9,54,23};
    int n = 5 ;
    bubbleSort(arr , n);
    selectionSort(arr , n);
    insertionSort(arr , n);
}

