#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n =6 ;
    vector<int>arr = {2,1,3,1,2,4,3,4,56,78,94,94,94,22,22,12,43,12,43};
    vector<int>arr1 ;
    
    sort(arr.begin(), arr.end());
    arr1.push_back(arr[0]);
int j =1;
    for(int i=1; i < arr.size() ;i++)
    {
        
      if(arr1[j-1] != arr[i])
      {
        arr1.push_back(arr[i]);
        j++ ;
      }
        

    }

    
for(int i=0; i < arr1.size();i++)
{
    cout<<arr1[i]<<" ";
}
}