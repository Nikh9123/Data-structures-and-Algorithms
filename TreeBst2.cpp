
#include<iostream>
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
void search(node *rt, int key);
node *deleteNode(node *rt, int k);
node *minValueNode(node *n);
};
BST::BST()
{
root=NULL;
}
int BST::isEmpty()
{
return(root==NULL);
}
void BST::insert(int dt)
{
node *temp=new node();
node *parent=NULL;

temp->data=dt;
temp->lchild=NULL;
temp->rchild=NULL;

if(isEmpty())
root=temp;
else
{
node *ptr=root;
while(ptr!=NULL)
{
parent=ptr;
if(dt < ptr->data)
ptr=ptr->lchild;
else
ptr=ptr->rchild;
}
if(dt < parent->data)
parent->lchild=temp;
else
parent->rchild=temp;
}
}
void BST::inorder(node *rt)
{
if(rt!=NULL)
{
inorder(rt->lchild);
cout<<rt->data<<"\t";
inorder(rt->rchild);
}
}
void BST::search(node *rt, int key)
{
int d=0;
node *temp=rt;
node *pr=NULL;
while(temp!=NULL)
{
d++;
if(temp->data==key)
{
if(pr==NULL)
cout<<temp->data<<" is root element"<<endl;
else
cout<<"\n The parent node :"<<pr->data;

cout<<"\n The data found at depth:"<<d<<endl;
return ;
}
else if(key > temp->data)
{
pr=temp;
temp=temp->rchild;
}
else
{
pr=temp;
temp=temp->lchild;
}
}
cout<<"The Data not found"<<endl;
return;
}
node BST::minValueNode(node n)
{
node *cur=n;
while(cur && cur->lchild!=NULL)
cur=cur->lchild;
return cur;
}
node BST::deleteNode(node rt, int key)
{
BST bs;
if (rt == NULL)
return rt;
if (key < rt->data)
rt->lchild = deleteNode(rt->lchild, key);
else if (key > rt->data)
rt->rchild = deleteNode(rt->rchild, key);
else {
if (rt->lchild==NULL and rt->rchild==NULL)
return NULL;
else if (rt->rchild == NULL) {
node temp = rt->rchild;
delete rt;
return temp;
}
else if (rt->rchild == NULL) {
node* temp = rt->lchild;
delete rt;
return temp;
}
node* temp = bs.minValueNode(rt->rchild);
rt->data = temp->data;
rt->rchild = deleteNode(rt->rchild, temp->data);
}
return rt;
}

int main()
{
BST b;
node *t;
cout<<"Tree :"<<b.isEmpty()<<endl;
b.insert(20);
b.insert(15);
b.insert(30);
b.insert(40);
b.insert(25);
b.insert(10);
b.insert(14);
b.insert(18);
b.insert(19);
b.insert(7);
// b.insert(9);
// b.insert(50);
b.insert(28);
// b.insert(55);
// b.insert(1);
cout<<"Inorder "<<endl;
b.inorder(root);
//b.search(root,25);
t=b.deleteNode(root,7);
cout<<"\n After Deleting node 7"<<endl;
b.inorder(t);
t=b.deleteNode(t,25);
cout<<"\n After Deleting node 25 "<<endl;
b.inorder(t);
t=b.deleteNode(t,15);
cout<<"\n After Deleting node 15 "<<endl;
b.inorder(t);
return 0;
}