using namespace std;
#include<bits/stdc++.h>
int gcd(int n, int m)
{
    int res = min(n, m);
    while(res > 0)
    {
        if(n % res == 0 && m % res == 0)
        {
            break ;
        }
        res-- ;

    }
    return res ;
}
int main()
{
    int n , m;
    cin>>n>>m;
    cout<<gcd(n , m)<<endl;
}