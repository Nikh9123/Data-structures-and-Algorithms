using namespace std ;
#include<bits/stdc++.h>

void Merge(int *arr , int s , int e)
{
    int mid = s + (e-s)/2;

    int len1 = mid- s +1  ;
    int len2 = e - mid ;

    int *First = new int[len1];
    int *second = new int[len2]; 



    int mainArrayIndex = s ;
    for(int i = 0; i <len1;i++)
    {
        First[i] = arr[mainArrayIndex++];
    }
     mainArrayIndex = mid+1 ;
    for(int j =0 ; j <len2 ; j++)
    {
     second[j] = arr[mainArrayIndex++];
    }



    int index1 = 0 ,index2 = 0;
    mainArrayIndex = s ;
    while(index1 < len1 && len2 > index2)
    {
        if(First[index1] < second[index2])
        {
            arr[mainArrayIndex++] = First[index1++];
        }
        else 
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[mainArrayIndex++] = First[index1++];
    }
    while(index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++]; ;
    }
}
void MergeSort(int *arr , int s,int  e)
{

   int mid = s +(e-s)/2;

   if(s >= e)
   {
    return ;
   }
   Merge(arr , s , mid-1);//left wala
   Merge(arr , mid+1 , e);//right wala
   //merge whole array 
   Merge(arr , s, e);

}
int main()
{
    int n = 7 ;
int arr[7]  ={38,27,43,3,9,82,10};
MergeSort(arr , 0 ,n-1);
for(int i=0; i < n;i++)
{
    cout<<arr[i]<<" ";
}
} 