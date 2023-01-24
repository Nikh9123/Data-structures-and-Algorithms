using namespace std ;
#include<bits/stdc++.h>
int SlidinWindow(int arr[] , int n, int k)
{
    int sum = 0 ;
    int maXsum = arr[0] +arr[1];
for(int i=1 ; i <n ; i++)
{
sum = arr[i]+arr[i+1];
maXsum = max(sum , maXsum);
}
return maXsum ;
}


int main()
{
    int n = 4 ;
int arr[] = {100, 200, 300, 400};
       int  k = 2 ;
cout<<SlidinWindow(arr, n ,k);
}