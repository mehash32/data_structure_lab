
#include<bits/stdc++.h>
#include<string.h>
//#define 6 20
#define true 1
#define false 0
using namespace std;

int top = -1;
int stack[6];

/*Begin of push*/
char push(char item)
{
    int stack[6];
	if(top == (6-1))
		printf("Stack Overflow\n");
	else
	{
		top=top+1;
		stack[top] = item;
	}
}

char pop()
{
    int stack[6];
	if(top == -1)
		printf("Stack Underflow\n");
	else
		return(stack[top--]);
}
main()
{
	char exp[18],temp;
	int i,valid=true;
	printf("Enter an algebraic expression : ");
	fflush(stdin);
	gets(exp);

	for(i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push( exp[i] );
		if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
			if(top == -1)    /* stack empty */
				valid=false;


			else
			{
				temp=pop();
				if( exp[i]==')' && (temp=='{' || temp=='[') )
					valid=false;
				if( exp[i]=='}' && (temp=='(' || temp=='[') )
					valid=false;
				if( exp[i]==']' && (temp=='(' || temp=='{') )
					valid=false;

			}
	}
	if(top>=0) /*stack not empty*/
		valid=false;

	if( valid==true )
		printf("Valid expression\n");
	else
		printf("Invalid expression\n");

}
/*
a+b
(a+b
 [{(a+b)-(c-d)}+e]
 {(a+b)-(c-d))
 ((a+b}
   {(a+b)-c}
   */
