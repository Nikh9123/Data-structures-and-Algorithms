using namespace std ;
#include<bits/stdc++.h>
class Stack 
{
	int max , top ;
	char s[20];
    public:
	Stack();
	void Push(char);
	char pop();
	int IsEmpty();
	char getTop();
	char ISP(char);
	char ICP(char);
	char Infix_to_postfix(char infix[20], char postfix[20]);

};
Stack::Stack()
{
	top = -1 ;
	max = 20 ;
}
void Stack ::Push(char ch)
{
  if(top == max-1)
  {
	cout<<"stack overflow :"<<endl;
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
		cout<<"stack is empty"<<endl;
	}
	else{
        ch = s[top] ;
		top-- ;
	}
	return ch ;
}
int Stack ::IsEmpty()
{
	if(top == -1)
	{
		return 1 ;
	}
	else 
	{
		return -1 ;
	}
}
char Stack ::getTop()
{
	char ch ;
	if(IsEmpty())
	{
		cout<<"stack is empty"<<endl;
	}
	else 
	ch = s[top] ;

	return ch ;
}
char Stack :: Infix_to_postfix(char infix[20], char postfix[20])
{
	int i = 0;
	char ch , x ;
	Stack sk ;
	sk.Push('#');
	while(infix[i] != '\0')
	{
       ch = infix[i];
	   i++ ;
	   if(ch >= 'a' && ch <= 'z')
	   {
		cout<<ch;

	   }
	   else
	   {
		if(ch == ')')
		{
			while(sk.getTop() != '(')
			{
              x = sk.pop();
			  cout<<x ;
			}sk.pop();
		}
		else
		{
			if(ISP(sk.getTop()) > ICP(ch))
			{
				x = getTop();
				cout<<x;
			}
			sk.Push(ch);
		}
	   }
	}
	while(!sk.IsEmpty())
	{
		x = sk.pop();
		if(x !='#')
		cout<<x;
	}

}
int main()
{

}