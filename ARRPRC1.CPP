using namespace std;
#include <bits/stdc++.h>

void pRintForward(int arr[], int n)
{
    cout << "in pRintForward Function: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void PrintBackward(int arr[], int n)
{
    cout << "in PrintBackward Function: " << endl;

    for (int i = n - 1; i >= 0; i++)
    {
        cout << arr[i] << " ";
    }
}

void DeleteArr(int arr[] , int n)
{
    int pos ;
    cout<<"enter position to delete :"<<endl;
    cin>>pos;
    if(pos < n)
    {
        for(int i = pos ; i < n ; i++)
        {
            arr[i] = arr[i+1];

        }
        n-- ;
    }
    pRintForward(arr , n);

}
void InsertINArr(int arr[], int n)
{
    cout << "enter pos where you want to insert an element :" << endl;
    int pos, d;
    cin >> pos;
    cout << "enter an element :" << endl;
    cin >> d;
   
    for (int i = n-1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    
    arr[pos] = d;
    n++ ;
    pRintForward(arr, n);
    DeleteArr(arr , n);
}

int BinearySearch(int arr[] , int n ,int key)
{

    int s = 0 ;
    int e = n-1 ;
    int mid = s + (e-s)/2 ;
    while(s <= e)
    {
       if(key == arr[mid])
       {
        return mid ;
       }
       else if(key > arr[mid])
       {
         s = mid +1 ;
       }
       else 
       {
        e = mid -1 ;
       }
       mid = s + (e-s)/2 ;

    }
    return -1 ;
}
void SelectionSort(int arr[] , int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[i] > arr[j])
            swap(arr[i], arr[j]);
        }
    }
    cout<<"after selectionsort:"<<endl;
    pRintForward(arr ,n);
}
void BubbleSort(int arr[] ,int n)
{
    for(int i = 0 ; i < n -1 ; i++)
    {
        for(int  j = 0; j < n-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j] , arr[j+1]);
        }
    }
    cout<<"in bubble sort function:"<<endl;
    pRintForward(arr , n);
}
void InsertionSort(int arr[] , int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        int temp = arr[i];
        int j = i-1 ;
        for(; j >= 0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break; 
            }

        }
         arr[j+1] = temp ;
    }
        cout<<"in insertion sort function:"<<endl;
        pRintForward(arr,n);
}
int main()
{
    int n = 8;
    int arr[n] = {10, 22, 4, 12, 45, 93, 21, 44};
    int a[n] = {2,3,6,444,688,980,2221,9970};
    // InsertINArr(arr, n);
    // int key ;
    // cin>>key;
    // cout<< BinearySearch(a , n , key);
    // SelectionSort(arr , n);
    // BubbleSort(arr,n);
    InsertionSort(arr, n);
    
}