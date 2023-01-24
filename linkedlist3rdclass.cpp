#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *link;
};
node *first, *last;
class LinkedList
{
public:
    LinkedList();
    void create();
    void Display();
    void Insert_at_Begin();
    void Insert_at_Last();
    void Insert_at_Given_Position();
    // Deletion function
    void Delete_at_Begin();
    void Delete_at_Last();
    void Delete_at_given_position();
    void Traversal_reverse(node *h);
    void Search();
};
LinkedList::LinkedList()
{
    first = NULL;
    last = NULL;
}
void LinkedList::create()
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
        last->link = first; // add this line list has converted single to circular linkedlist.
    }
}
void LinkedList::Display()
{
    node *temp = first;
    if (temp == NULL)
        cout << "List is Empty" << endl;
    else
    {
        // while(temp!=NULL)
        while (temp != last)
        {
            cout << temp->data << "===>";
            temp = temp->link;
        }
        cout << temp->data << "===>";
        cout << "NULL";
    }
}
void LinkedList::Insert_at_Begin()
{
    int n;
    node *temp = new node();
    cout << "\nEnter the data to insert at begin..";
    cin >> n;

    temp->data = n;
    temp->link = NULL;

    temp->link = first;
    first = temp;
}
void LinkedList::Insert_at_Last()
{
    int n;
    node *temp = new node();
    cout << "\nEnter the data to insert at last :";
    cin >> n;

    temp->data = n;
    temp->link = NULL;

    last->link = temp;
    last = temp;
    last->link = first;
}

void LinkedList::Insert_at_Given_Position()
{
    int d, pos, count = 1;
    node *temp, *pre, *cur;
    cout << "\nEnter the data to insert at given position :";
    cin >> d;
    cout << "\n Enter the position to insert data :";
    cin >> pos;

    pre = NULL;
    cur = first;
    temp = new node();
    temp->data = d;
    temp->link = NULL;
    while (count != pos)
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
        cout << "Insertion is not possible" << endl;
}
void LinkedList::Delete_at_Begin()
{
    node *temp = first;
    if (temp == NULL)
        cout << "Deletion is not possible" << endl;
    else
    {
        cout << "\nFirst Element Deleted : " << temp->data << endl;
        first = first->link;
        delete temp;
    }
    last->link = first;
}

void LinkedList::Delete_at_Last()
{
    node *pre, *cur;
    cur = first;
    pre = NULL;
    while (cur != last)
    {
        pre = cur;
        cur = cur->link;
    }
    if (cur == last)
    {
        cout << "\n The last Element deleted :" << cur->data << endl;
        pre->link = NULL;
        // last = pre;
        last->link = first;

        delete cur;
    }
    else
        cout << "Deletion is not possible" << endl;
}

void LinkedList::Delete_at_given_position()
{
    int pos, count = 1;
    node *pre, *cur;
    pre = NULL;
    cur = first;
    cout << "\n Enter the position of element to delete : ";
    cin >> pos;
    while (count != pos)
    {
        pre = cur;
        cur = cur->link;
        count++;
    }
    if (count == pos)
    {
        cout << "\nDeleted element :" << cur->data << endl;
        pre->link = cur->link;
        delete cur;
    }
    else
        cout << "Deletion is not possible" << endl;
}

void LinkedList::Traversal_reverse(node *t)
{
    if (t == NULL)
        return;
    Traversal_reverse(t->link);
    cout << t->data << "===>";
}

void LinkedList::Search()
{

    int count = 0, key;
    node *temp = first;
    bool flag = false;
    cout << "\nEnter the element to found: ";
    cin >> key;
    if (temp == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        while (temp != NULL)
        {
            count++;
            if (temp->data == key)
            {
                flag = true;
                cout << "Element found at position :" << count << endl;
                return;
            }
            temp = temp->link;
        }
    }

    if (flag == false)
    {
        cout << "Element does not found" << endl;
    }
}

int main()
{
    LinkedList list;
    int size;
    cout << "Enter the size of list : " << endl;
    ;
    cin >> size;
    for (int i = 0; i < size; i++)
        list.create();
    list.Display();
    // list.Insert_at_Begin();
    // list.Display();
    // list.Insert_at_Last();
    // list.Display();
    // list.Insert_at_Given_Position();
    // list.Display();
    // list.Delete_at_Begin();
    // list.Display();
    // list.Delete_at_Last();
    // list.Display();
    // list.Delete_at_given_position();
    // list.Display();
    // cout<<endl;
    // list.Traversal_reverse(first);
    // list.Search();
    return 0;
}