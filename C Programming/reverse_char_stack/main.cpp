#include <iostream>

using namespace std;
struct node
{
    char data;
    node *next;
};
node*top=NULL,*nptr,*tptr;

int main()
{
    char item1;
     for(int i=0;i<5;i++)
    {
    cin>>item1;

    nptr=new(node);
    nptr->data=item1;
    nptr->next-NULL;
    if(top==NULL)
        top=nptr;
    else
    {
       nptr->next=top;
       top=nptr;
    }
    }
     cout<<"printing stack"<<endl;

    while(top!=NULL)
    {

        cout<<top->data<<" ";
        top=top->next;
    }

    return 0;
}
