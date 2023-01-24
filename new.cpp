//2nd class code
//searching by element it will return location'
// /searching by location  it will return value'
#include<iostream>
using namespace std;
class Array{
int x[100] ;
int maxsize;
public:
Array();
void Read_Element();
void Display_Element_Forward();
void Display_Element_Backward();
int search(int);
void insert(int loc,int el);
};
void Array::insert(int loc, int element)
{
int i;
if(maxsize>=100 && loc>=maxsize)
{
cout<<"Sorry, insertion is not possible..!";
exit(0);
}
else
{
for(i=maxsize-1;i>=loc;i--)
{
x[i+1]=x[i];
}
x[loc]=element;
maxsize++;
}
}


int Array::search(int k)
{
for(int i=0;i<maxsize;i++)
{
if(x[i]==k)
return i;
}
return -1;
}
Array::Array()
{
cout<<"Enter the size of array : ";
cin>>maxsize;
}
void Array::Read_Element(){

if(maxsize>100)
{
cout<<"Array max size is 100 ";
exit(0);
}
else
{
cout<<"Enter "<<maxsize<<" number of Element into Array : "<<endl;
for(int i=0;i<maxsize;i++)
{
cin>>x[i];
}
}
}
void Array::Display_Element_Forward(){
cout<<"\nThe Element of Array in Forward "<<endl;
for(int i=0;i<maxsize;i++)
{
cout<<x[i]<<"\t";
}
}
void Array::Display_Element_Backward() {
cout<<"\nThe Element of Array in Backward"<<endl;
for(int i=maxsize-1;i>=0;i--)
{
cout<<x[i]<<"\t";
}
}
int main()
{
int key,r;
Array a;
a.Read_Element();
a.Display_Element_Forward();
a.Display_Element_Backward();
cout<<"\nEnter the element for search : ";
cin>>key;
r = a.search(key);
cout<<"\nThe Element found :"<<r<<endl;
cout<<a.search(key);

a.insert(2,88);
a.Display_Element_Forward();
return 0;
}