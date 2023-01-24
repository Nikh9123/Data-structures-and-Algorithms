using namespace std ;
#include<bits/stdc++.h>
class Stack
{
    public :
    char s[20];
    int top, MAX;
    Stack();
    void push(char t);
    char pop();
    int IsEmpty();
    char getTop();
    char ISP(char); // In Stack Priority
    char ICP(char); // In Coming Priority
    void Infix_to_Postfix(char infix[20], char postfix[20]);
};
Stack::Stack()
{
    top = -1 ;
    max = 20 ;
}
void Stack::push(char ch)
{
    if(top == max-1)
    {
        cout<<"overFlow"<<endl;
    }
    else 
    {
        top++ ;
        s[top] = ch ;
    }
}
char Stack ::pop()
{
    char ch ;
    if(top == -1)
    {
        cout<<"underFlow"<<endl;
    }
    else 
    {
        ch = s[top];
        top--; 
    }
    return ch ;
}
int Stack ::IsEmpty()
{
    if(top == -1)
    {
        return 1 ;
    }
    else{
        return 0 ;
    }
}
char Stack ::getTop()
{
    char ch ;
    if(top == -1)
    {
        cout<<"empty stack"<<endl;
    }
    else 
    {
        ch = s[top];
    }
    return ch ;
}
void Stack ::ISP(char ch)
 {
 	switch(ch)
 	{
 		case '+':
 		case '-':
 			return 1 ;
 		case '*':
 		case '/':
		    return 2 ;
		case '^':
	     	return 3 ;
		case ')':
		    return 0 ;
		case '#':
			return -1 ;
			
	 }
 }
 void Stack::ICP(char ch)
 {
     switch (ch)
     {
     case '+':
     case '-':
        return 1 ;
    case '*':
    case '/':
        return 2 ;
    case '^':
        return 3 ;
    case '(':
        return 4 ;

     }
 }
void Stack ::Infix_to_Postfix()
{
    Stack sk ;
    int i = 0;
    char ch ,x ;
    sk.push('#');
    while(infix[i] != '\0')
    {
        ch = infix[i];
        i++;
        if(ch >= 'a' && ch <= 'z')
        cout<<ch;
        else 
        {
            if(ch == ')')
            {
                while(ch != '(')
                {
                    x=sk.pop();
                    cout<<x;
                }
                sk.pop();
            }
            else{
                while()
            }
        }

    }

}
int main()
{

}