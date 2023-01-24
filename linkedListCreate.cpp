#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *link;
    int data;
};
node *first, *last;
class List
{
public:
    List();
    void create();
    void Display();
    void InsertAtbegin();
    void Insert_at_end();
    void Insert_atGiven_pos();
    // deleteion
    void DeleteFirst();
    void Delete_last();
    void DeleteAtGivenPos();
    // traverse
    void Traversal_reversal();
    void search();
};
List::List()
{
    first = last = NULL;
}
void List ::create()
{
    node *temp = new node;
    int n;
    cout << "\n enter an element : " << endl;
    cin >> n;
    temp->data = n;
    temp->link = NULL;
    if (first == NULL)
    {
        first = temp;
        last = first;
    }
    else
    {
        last->link = temp;
        last = temp;
    }
}
void List ::Display()
{
    node *temp = first;
    if (temp == NULL)
    {
        cout << "\nList is empty" << endl;
    }
    while (temp != NULL)
    {
        /* code */
        cout << temp->data << "-->" ;
        temp = temp->link;
    }
    cout << "NULL" << endl;
}
void List::InsertAtbegin()
{
    node *temp = new node;
    cout << "\n enter the element you eant to insert :" << endl;
    int n;
    cin >> n;
    temp->data = n;
    temp->link = first; // is se first me element add ho jayega 
    first = temp;
}
void List ::Insert_at_end()
{
    int n ;
    node *temp = new node ;
    cout<<"\n enter the element you want to insert at last "<<endl;
    cin>>n ;
    temp->data = n ;
    last->link = temp ;
    temp->link = NULL;
    last = temp ;
}
void List ::Insert_atGiven_pos()
{
    node *pre , *cur ;
    pre = NULL ;
    cur = first ;
    int count = 1 , pos ,ch , n ;
    node *temp = new node ;
    cout<<"enter the element you want to insert"<<endl;
    cin>>n;
    temp->data = n;
    temp->link = NULL;
    cout<<"enter the pos you want to insert :"<<endl;
    cin>>pos;
    while(count != pos)
    {
        pre = cur ;
        cur = cur->link;
        count++ ;
    }
    if(count == pos)
    {
        pre->link = temp ;
        temp->link = cur ;
    }
    else{
        cout<<"\n not able to insert ele"<<endl;
    }  
}
int main()
{
    List l;
   
        l.create();
        l.create();
        l.create();
        l.InsertAtbegin();
        l.Insert_at_end();
        l.Insert_atGiven_pos();
        l.Display();
    return 0;
}
