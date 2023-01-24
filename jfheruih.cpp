using namespace std ;
#include<bits/stdc++.h>
int power(int n , int pow)
{
    int ans ;
    for(int i = 1 ; i<=pow ;i++)
    {
    	i = n ;
        ans = n * i ;

    }
    return ans ; 
}
int main()
{
    int n =2 ;
    // cin>>n;
    int pow=4 ;
    // cin>>pow;
    cout<<power(n , pow);

}
