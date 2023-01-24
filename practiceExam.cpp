#include<bits/stdc++.h>
using namespace std;
bool Palindrome(int n)
{
    int temp = n ;
    int res =  0;

    while(temp != 0)
    {
        res = res * 10 + (temp%10);

        temp = temp/10 ;
    }
    if(n == res)
    {
        return true ;
    }
    return false;



}
int main()
{
    int n ;
    cin>>n ;
    cout<<Palindrome(n)<<endl;
}