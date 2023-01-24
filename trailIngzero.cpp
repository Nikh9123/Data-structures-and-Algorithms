#include<bits/stdc++.h>
using namespace std ;
// int factorial(int n)
// {
//     if(n == 0)
//     {
//         return 1 ;
//     }

//     return n * factorial(n-1);
    
// }
// int TrailingZeros(int n)
// {
//     long long fact = factorial(n);

//     int count = 0;
//     long long temp =  fact ;
//     while(temp % 10 == 0)
//     {
//         count ++ ;
//         temp = temp/10 ;

//     }
//     return count ;

// }//not efficient for long values 


int TrailingZeros(int n)
{
    int count =  0 ;
   for(int i = 5 ; i <= n ; i = i *5 )
   {
        count = count + n / i ;
   }
   return count ;
}
int main()
{
    int n ;
    cin>>n;
    cout<<TrailingZeros(n)<<endl;
}