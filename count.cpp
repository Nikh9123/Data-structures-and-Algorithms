using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n = 251;
    int res = 0;
    for (int i = 0; i <= n; i = i * 5)
    {
        res = res + (n / i);
    }
    cout << res;
}