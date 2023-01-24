#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *lchild;
    int data;
    node *rchild;
};
node *root;
class BST
{
public:
    BST();
    int isEmpty();
    void insert(int dt);
    void inorder(node *rt);
    void preorder(node *rt);
    void postorder(node *rt);
    void search(node *rt, int key);
    node *deleteNode(node *rt, int k);
    node *minValueNode(node *n);
};
BST::BST()
{
    root = NULL;
}
int BST::isEmpty()
{
    return (root == NULL);
}
void BST::insert(int dt) // DT=15
{
    node *temp = new node();
    node *parent = NULL;
    temp->data = dt; //  15
    temp->lchild = NULL;
    temp->rchild = NULL;
    if (isEmpty()) // if(root=NULL) -->> false
        root = temp;
    else
    {
        node *ptr = root;
        while (ptr != NULL)
        {
            parent = ptr;
            if (dt < ptr->data)
                ptr = ptr->lchild; // travel left
            else
                ptr = ptr->rchild;
        }
        if (dt < parent->data)
            parent->lchild = temp;
        else
            parent->rchild = temp;
    }
}
void BST::inorder(node *rt)
{
    if (rt != NULL)
    {
        inorder(rt->lchild);
        cout << rt->data << "\t";
        inorder(rt->rchild);
    }
}
void BST::preorder(node *rt)
{
    if (rt != NULL)
    {
        cout << rt->data << "\t";
        preorder(rt->lchild);
        preorder(rt->rchild);
    }
}
void BST::postorder(node *rt)
{
    if (rt != NULL)
    {

        postorder(rt->lchild);
        postorder(rt->rchild);
        cout << rt->data << "\t";
    }
}
void BST::search(node *rt, int key)
{
    cout << "\n";
    int d = 0;
    node *temp = rt;
    node *pr = NULL;
    while (temp != NULL)
    {
        d++;
        if (temp->data == key)
        {
            if (pr == NULL)
            {
                cout << temp->data << "It is root element" << endl;
            }
            cout << "The parent node :" << pr->data << endl;
            cout << "The data found at depth :" << d << endl;
            return;
        }
        else if (key > temp->data)
        {
            pr = temp;
            temp = temp->rchild;
        }
        else
        {
            pr = temp;
            temp = temp->lchild;
        }
    }
    cout << "The data not found" << endl;
    return;
}
node *BST::minValueNode(node *n)
{
    node *cur = n;
    while (cur && cur->lchild != NULL)
        cur = cur->lchild;
    return cur;
}
node *BST::deleteNode(node *rt, int key)
{
    BST bs;
    if (rt == NULL)
        return rt;
    if (key < rt->data)
        rt->lchild = deleteNode(rt->lchild, key);
    else if (key > rt->data)
        rt->rchild = deleteNode(rt->rchild, key);
    else
    {
        if (rt->lchild == NULL and rt->lchild == NULL)
            return NULL;
        else if (rt->lchild == NULL)
        {
            node *temp = rt->lchild;
            delete rt;
            return temp;
        }
        else if (rt->rchild == NULL)
        {
            node *temp = rt->lchild;
            delete rt;
            return temp;
        }
        else
        {
            node *temp = bs.minValueNode(rt->rchild);
            rt->data = temp->data;
            rt->rchild = deleteNode(rt->rchild, temp->data);
        }
    }
    return rt;
}
int main()
{
    BST b;
    node *t;
    cout << "tree:" << b.isEmpty() << endl;
    b.insert(20);
    b.insert(15);
    b.insert(25);
    b.insert(7);
    b.insert(45);
    b.insert(1);
    b.insert(14);
    b.insert(16);
    b.insert(17);
    b.insert(10);
    b.insert(33);
    b.insert(28);
    // b.insert(55);
    b.insert(1);

    b.inorder(root);
    cout << "\n";
    // cout<<"\n"<<"tree:"<<b.isEmpty()<<endl;
    // b.preorder(root);
    // cout<<"\n"<<"tree:"<<b.isEmpty()<<endl;
    // b.postorder(root);
    // cout<<"\n"<<"tree:"<<b.isEmpty()<<endl;
    // b.search(root,30);
    // b.search(root,14);
    // b.search(root,100);
     t=b.deleteNode(root,7);
     cout<<"Inorder after deleting 7"<<endl;
    t = b.deleteNode(root, 1);
    cout << "Inorder after deleting 1" << endl;
    b.inorder(t);
    return 0;
}