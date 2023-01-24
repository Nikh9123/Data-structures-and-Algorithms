#include <iostream>
using namespace std;
class Array
{
    int x[100], y[100], z[100];
    int xsize, ysize, zsize;

public:
    Array();
    void Read_Element();
    void Display_Element_Forward();
    void Display_Element_Backward();
    int search(int);
    void insert(int loc, int el);
    void Delete(int loc);
    void mergeArray();
};
void Array::mergeArray()
{
    int i = 0, j = 0, k = 0;
    cout << "Enter the size of x array : ";
    cin >> xsize;
    cout << "Enter the element for x array" << endl;
    for (i = 0; i < xsize; i++)
        cin >> x[i];

    cout << "Enter the size of y array : ";
    cin >> ysize;
    cout << "Enter the element for y array" << endl;
    for (i = 0; i < ysize; i++)
        cin >> y[i];

    zsize = xsize + ysize;
    i = 0, j = 0, k = 0;
    while (i < xsize && j < ysize)
    {
        if (x[i] < y[j])
        {
            z[k++] = x[i++];
        }
        else
        {
            z[k++] = y[j++];
        }
    }
    while (i < xsize)
    {
        z[k++] = x[i++];
    }
    while (j < ysize)
    {
        z[k++] = y[j++];
    }
    cout << "X Element ";
    for (i = 0; i < xsize; i++)
        cout << x[i] << "\t";
    cout << endl;
    cout << "y Element ";
    for (i = 0; i < ysize; i++)
        cout << y[i] << "\t";
    cout << endl;

    cout << "z Element ";
    for (i = 0; i < zsize; i++)
        cout << z[i] << "\t";
}
void Array::Delete(int loc)
{
    int i;
    if (loc > 100 && loc >= xsize)
    {
        cout << "Deletionis not possible";
        exit(0);
    }
    else
    {
        for (i = loc; i < xsize; i++)
            x[i - 1] = x[i];

        x[i - 1] = 0;
        xsize--;
    }
}

void Array::insert(int loc, int element)
{
    int i;
    if (xsize >= 100 && loc >= xsize)
    {
        cout << "Sorry, insertion is not possible..!";
        exit(0);
    }
    else
    {
        for (i = xsize - 1; i >= loc; i--)
        {
            x[i + 1] = x[i];
        }
        x[loc] = element;
        xsize++;
    }
}

int Array::search(int k)
{
    for (int i = 0; i < xsize; i++)
    {
        if (x[i] == k)
            return i;
    }
    return -1;
}
Array::Array()
{
    // cout << "Enter the size of x array : ";
    // cin >>xsize;
    // cout << "Enter the size of y array : ";
    // cin >> ysize;
    // zsize = xsize + ysize;
}
void Array::Read_Element()
{

    if (xsize > 100)
    {
        cout << "Array max size is 100 ";
        exit(0);
    }
    else
    {
        cout << "Enter " << xsize << " number of Element into Array : " << endl;
        for (int i = 0; i < xsize; i++)
        {
            cin >> x[i];
        }
    }
}
void Array::Display_Element_Forward()
{
    cout << "\nThe Element of Array in Forward " << endl;
    for (int i = 0; i < xsize; i++)
    {
        cout << x[i] << "\t";
    }
}
void Array::Display_Element_Backward()
{
    cout << "\nThe Element of Array in Backward" << endl;
    for (int i = xsize - 1; i >= 0; i--)
    {
        cout << x[i] << "\t";
    }
}
int main()
{
    int key, r;
    Array a;
    /* a.Read_Element();
    a.Display_Element_Forward();
    /* a.Display_Element_Backward();
    cout<<"\nEnter the element for search : ";
    cin>>key;
    // r=a.search(key);
    // cout<<"\nThe Element found :"<<r<<endl;
    cout<<a.search(key);
    /
    //a.insert(2,88);
    //a.Display_Element_Forward();
    a.Delete(2);
    a.Display_Element_Forward();
    */
    a.mergeArray();
    return 0;
}