using namespace std;
#include <bits/stdc++.h>
void PrimeFactor(int n)
{
    for (int i = 2; i < n; i++)
    {
        while (n / i == 0)
        {
           cout<<i<<" " ;
           break;
        }
    }
}
int main()
{

    int n = 10;
    PrimeFactor(n);

    //  cin>>n;
}

