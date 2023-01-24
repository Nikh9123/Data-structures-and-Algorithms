using namespace std;
#include <bits/stdc++.h>
int factorial(int fact)
{
    /// iterartive method
    // int res = 1;
    // for (int i = 2; i <= fact; i++)
    // {
    //     /* code */
    //     res = res * i;
    // }
    // return res;

    /// recursive method
    if (fact == 0)
    {
        return 1;
    }

    return fact * factorial(fact - 1);
}
int trailingZero(int n)
{
//  int fact =  factorial(n);
//  cout<<"fact ="<<fact<<endl;
  ///knife approach
    int res = 0;
//    while(fact  % 10 == 0)
//    {
//      res++ ;
//      fact = fact / 10 ;
//    }
//  return res ;
  
  //effficient approach
  for(int i=5 ; i<=n ; i=i*5){
  
  
  	res = res + n/i ;
}
  return res  ;
    
}

bool palindrome(int x)
{

    int temp;
    temp = x;
    int rev = 0;

    while (temp > 0)
    {
        int rem = x % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev = x)
    {
        return true;
    }
}
int main()
{
    //     int x = 1112111;
    // //    cin >> x;

    //     cout << palindrome(x);

    int n = 100;
    cout << trailingZero(n);
}
