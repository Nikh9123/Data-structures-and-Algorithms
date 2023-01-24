using namespace std;
#include <bits/stdc++.h>
int Consect1(int n)
{
	int count = 0 ;
  int temp = 0 ;
 while( n )
 {
// 	cout<<"n&1 = "<<(n&1)<<endl;
  if(n & 1 == 1)
  {
  
    count++ ;
//   	cout<<"count = "<<count<<endl;
   
  }
  else
  {
//  	cout<<"temp = "<<temp<<endl;
  	temp = count ;
//  	cout<<"count in if else  = "<<count<<endl;
  	count = 0 ;
  }
  n=n>>1;
  
//  cout<<"n = "<<n<<endl;
 }
 return max(count , temp);
}
int main()
{
  int n ;
  cin>>n;
  cout<<Consect1(n);
}
