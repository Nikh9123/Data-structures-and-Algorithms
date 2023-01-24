#include <bits/stdc++.h>
using namespace std;
int FindSubarraySum(int arr [], int n)
{
    
    int maxEnd = arr[0], res = INT_MIN ;
    for(int i = 1 ; i < n ;i++)
    {
        maxEnd = max(maxEnd + arr[i] , arr[i]);
        res = max(maxEnd, res);    }
    return res ;
}
int circularsubarraySum(int arr[], int n)
{
//    int res = arr[0] ;
//    for(int i = 0 ; i < n ; i++) // taking an element 
//    {
//     int curr_sum = arr[i];//we are adding elements in currsum 
//     int curr_max = arr[i];
//     for(int j = 1 ; j < n ; j++) //finding all circular subarray from ith index  
//     {   
//         int index = (i+j) % n ; //giving circular index 
//         curr_sum += arr[j] ;
//         curr_max = max(curr_max , curr_sum); //kisi particular index se pure subarray ka maximum subarray sum 
//     }
//     res = max(res , curr_max);
//    }
//    return res ;

//efficient way Tc => O(N) ;
int NormalSum = FindSubarraySum(arr , n);
int res = INT_MIN ;
if(NormalSum < 0)
{
    return NormalSum ; 
}
int arrSum =  0 ;
for(int i = 0 ; i < n ; i++)
{
arrSum+=arr[i];
arr[i] = -arr[i] ;
}
int circularSum =arrSum + FindSubarraySum(arr , n);
res = max(NormalSum , circularSum);
return res ;

}
int main()
{
    int n = 4;
    int arr[n] = {5,-2,3,4};
    cout << circularsubarraySum(arr, n);
    return 0;
}
