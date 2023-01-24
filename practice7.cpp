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
    void search();
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
        last->link = first;
    }
}
void LinkedList::Display()
{
    node *temp = first;
    if (temp == NULL)
        cout << "List is Empty" << endl;
    else
    {
        while (temp != last)
        {
            cout << temp->data << "===>";
            temp = temp->link;
        }
        cout << temp->data << endl;
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
}

void LinkedList::Insert_at_Given_Position()
{
    int d, pos, count = 1;
    node *temp, *pre, *cur;
    cout << "Enter the data to insert at given position :";
    cin >> d;
    cout << "Enter the position to insert data :";
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
        last = pre;
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
        cout << "Deleted element :" << cur->data << endl;
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
void LinkedList ::search()
{
    int count = 0, key;
    node *temp = first;
    bool flag = false;
    cout << "enter the element you want to search" << endl;
    cin >> key;

    if (temp == NULL)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        while (temp != NULL)
        {
            count++;
            if (temp->data == key)
            {
                flag = true;
                cout << "element found at position : " << count << endl;
                return;
            }
            temp = temp->link;
        }
    }
    if (flag == false)
    {
        cout << "element doesn't found" << endl;
    }
}
int main()
{
    LinkedList list;
    int n, ch;
    char ans;
    // do
    // {

    //     cout << "1: Creat" << endl;
    //     cout << "2: Insert at begin" << endl;
    //     cout << "3: Insert at last" << endl;
    //     cout << "4: Insert at at given position " << endl;
    //     cout << "5: Delete at begin" << endl;
    //     cout << "6: Delete at last" << endl;
    //     cout << "7: Delete at given position" << endl;
    //     cout << "8: Display" << endl;
    //     cout << "9: Display Reverse order" << endl;
    //     cout << "Enter your choice : ";
    //     cin >> ch;
    //     switch (ch)
    //     {
    //     case 1:
    //         list.create();
    //         break;
    //     case 2:
    //         list.Insert_at_Begin();
    //         break;
    //     case 3:
    //         list.Insert_at_Last();
    //         break;
    //     case 4:
    //         list.Insert_at_Given_Position();
    //         break;
    //     case 5:
    //         list.Delete_at_Begin();
    //         break;
    //     case 6:
    //         list.Delete_at_Last();
    //         break;
    //     case 7:
    //         list.Delete_at_given_position();
    //         break;
    //     case 8:
    //         list.Display();
    //         break;
    //     case 9:
    //         list.Traversal_reverse(first);
    //         break;
    //     default:
    //         cout << "Sorry !, slection is in correct..!";
    //         break;
    //     }
    //     cout << "\n Do yoy want to contin.... ? : ";
    //     cin >> ans;
    // } while (ans == 'y' || ans == 'Y');
    list.create();
    // list.search();
    list.Display();

    return 0;
}