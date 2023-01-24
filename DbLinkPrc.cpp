// #include<iostream>
// using namespace std;
// class node {
// public:
// node *pre;
// int data;
// node *next;
// };

// class LinkedList
// {
// public:
// node *first,*last;
// LinkedList();
// void create();
// void Travesal_Forward();
// void Traversal_Backward();
// };
// LinkedList::LinkedList()
// {
// first=NULL;
// last=NULL;
// }
// void LinkedList::create()
// {
// int a;
// node *temp;
// temp=new node();
// cout<<"Enter the data element : ";
// cin>>a;
// temp->data=a;
// temp->pre=NULL;
// temp->next=NULL;
// if(first==NULL)
// {
// first=temp;
// last=temp;
// }
// else
// {
// last->next=temp;
// temp->pre=last;
// last=temp;
// }
// }
// void LinkedList::Travesal_Forward()
// {
// node *temp=first;
// if(temp==NULL)
// cout<<"List is Empty"<<endl;
// else
// {
// while(temp!=NULL)
// {
// cout<<temp->data<<"===>";
// temp=temp->next;
// }
// cout<<"NULL";
// }
// }
// void LinkedList::Traversal_Backward()
// {
// node *temp=last;
// if(temp==NULL)
// cout<<"List is Empty"<<endl;
// else
// {
// while(temp!=NULL)
// {
// cout<<temp->data<<"===>";
// temp=temp->pre;
// }
// cout<<"NULL";
// }
// }

// int main()
// {
// LinkedList list;
// int size;
// cout<<"Enter the size of list : ";
// cin>>size;
// for(int i=0;i<size;i++)
// list.create();
// list.Travesal_Forward();
// cout<<endl;
// list.Traversal_Backward();
// return 0;
// }
using namespace std ;
#include<bits/stdc++.h>
class node 
{
    public:
    node *pre ;
    node *next ;
    int data ;
    
};
class Link {
    public:
    node *first , *last ;
    Link();
    void Create();
    void Traversal_forward();
    void Traversal_backward();

};
Link ::Link()
{
    first = last = NULL ;
}
void Link ::Create()
{
    int a ;
    cout<<"enter the data you want insert"<<endl;
    node *temp = new node();
    temp->data = a ;
    temp->next=NULL;
    temp->pre = NULL;
    if(first == NULL)
    {
        first = temp ;
        last =  temp;
    }
    else{
        last->next =  temp;
        temp->pre = last ;
        last = temp ;
    }

}
void Link ::Traversal_forward()
{
    node *temp = first ;
    if(first == NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else{
        while(temp != NULL)
        {
            cout<<temp->data<<"-->";
            temp =  temp->next;
        }
        cout<<"NULL";
    }
}
void Link ::Traversal_forward()
{
    node *temp = last ;
    if(last == NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else 
    {
        while(temp!= NULL)
        {
            cout<<temp->data<<"-->";
            temp = temp->pre;
        }
        
    }
}