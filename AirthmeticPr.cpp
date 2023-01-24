using namespace std ;
#include<bits/stdc++.h>
int main()
{
  int count = 0;
  int n ;
  cin>>n;
  while(n != 0)
  {
    count++ ;
    n /=10 ;
  }
  cout<<count ;


 int Isterm ; //a1
 cin>>Isterm ;
 int TermPos ; //n
 cin>>TermPos;
 int CommonDiff ;//d
 cin>>CommonDiff;

 int AP = Isterm + (TermPos - 1)*CommonDiff ; //inding ap  of n terms
 cout<<"AP = "<<AP<<endl;

 //sum of n terms of AP
 int sum = 0 ;
 sum = (TermPos/2)*(2*Isterm + (TermPos -1)*CommonDiff);
 cout<<sum<<" "<<endl;



 int a ; //a1
 cin>>a;

 int r; //r
 cin>>r;

 int n1 ; //n
 cin>>n1;
 int n = n1 -1 ;



 int GP = a *pow(r,n);

 cout<<GP;

double gp = (double)5.09*4 ;
cout<<gp;
}
