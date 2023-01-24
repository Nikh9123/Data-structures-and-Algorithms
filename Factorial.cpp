using namespace std ;
#include<bits/stdc++.h>

// int factorial(int n)
// {
//     int fact = n ;
//     int temp = n-1 ;
//     while( temp > 0)
//     {
        
//    fact = fact * temp ;
//    temp-- ;
//     }
//     return fact ;
// }

//factorial function recursive ⚠️⚠️⚠️⚠️
int factorial(int n)
{
    if(n == 0)
    {
        return 1 ;
    }

    return n * factorial(n-1);
    
}

int main()
{
    int n ;
    cin>>n;
    cout<<factorial(n)<<endl;
}