#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *link;
};

class LinkedList
{
public:
    node *first, *last;
    LinkedList();
    void create();
    void display();
    void Insert_at_Begin();
    void insert_at_last();
    void insert_at_Given_position();
    void search();
};

LinkedList ::LinkedList()
{
    first = NULL;
    last = NULL;
}

void LinkedList ::create()
{
    int a;
    node *temp;
    temp = new node();
    cout << "Enter the data element : ";
    cin >> a;
    temp->data = a;
    temp->link = NULL;
    if (first == NULL)
    {
        first = temp;
        last = temp;
    }
    else
    {
        last->link = temp;
        last = temp;
    }
}

void LinkedList ::display()

{
    node *temp = first;
    if (temp == NULL)
        cout << "List is Empty" << endl;
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << "===>";
            temp = temp->link;
        }
        cout << "NULL" << endl;
    }
}

void LinkedList ::Insert_at_Begin()
{
    int n;
    node *temp = new node();
    cout << "Enter the data to insert at begining " << endl;
    cin >> n;
    temp->data = n;
    temp->link = NULL;
    temp->link = first;
    first = temp;
}
void LinkedList ::insert_at_last()
{
    int n;
    node *temp = new node();
    cout << "Enter the data to insert at last position " << endl;
    cin >> n;
    temp->data = n;
    temp->link = NULL;
    // temp->link = first;
    // first = temp;
    last->link = temp;
    last = temp;
}
void LinkedList ::insert_at_Given_position()
{
    int d, pos, count = 1;
    node *temp, *pre, *cur;
    cout << "enter the data insert at given position" << endl;
    cin >> d;
    cout << "Enter the position of data" << endl;
    cin >> pos;

    pre = NULL;
    cur = first;
    temp = new node();
    temp->data = d;
    temp->link = NULL;
    if (count != pos)
    {
        pre = cur;
        cur = cur->link;
        count++;
    }
    if (count == pos)
    {
        pre->link = temp;
        temp->link = cur;
    }
    else
    {
        cout << "Insertion is not possible " << endl;
    }
}
void LinkedList ::search()
{
}

int main()
{
    LinkedList list;
    list.display();
    list.create();
    list.create();
    list.create();
    list.display();
    /* list.Insert_at_Begin();
     list.display();
     list.insert_at_last();
     list.display();*/
    list.insert_at_Given_position();
    list.display();
    return 0;
}
