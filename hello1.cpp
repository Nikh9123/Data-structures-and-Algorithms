
#include <bits/stdc++.h>
using namespace std;
void maxIndexDiff(int arr[], int n , int k) 
    { 
        // Your code here
        int lmax = min(arr[0], arr[n-1]);
        int ans =  0;
        for(int i=1 ; i < n-1 ; i++)
        {
            if(arr[i] < lmax)
            {
               int rainWater= lmax -  arr[i];
              ans += rainWater ;
            }
        }
        cout<<ans <<endl;
    }
int main()
{
    int n = 3, k = 2;
    int arr [n] = {6,9,9};

    maxIndexDiff(arr , n , k);
}