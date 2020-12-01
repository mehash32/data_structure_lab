#include <bits/stdc++.h>

using namespace std;
struct node
{
    int data;
    node* next;
};

int main()
{    int item;
    node *top=NULL,*nptr,*head;
     cout<<"enter 5 data"<<endl;

    for(int i=0;i<5;i++)
    {
    cin>>item;

    nptr=new(node);
    nptr->data=item;
    nptr->next-NULL;
    if(top==NULL)
        top=nptr;
    else
    {
       nptr->next=top;
       top=nptr;
    }
    }
    head=top;
     cout<<"printing stack"<<endl;

    while(top!=NULL)
    {

        cout<<top->data<<" ";
        top=top->next;
    }
    cout<<endl;
     cout<<"asesending"<<endl;
    node* head1=head;
    node*tptr=head1;
    int temp=0;
    while(tptr!=NULL)
    {
        nptr=tptr->next;
        while(nptr!=NULL)
        {
            if(tptr->data>nptr->data)
            {
                temp=nptr->data;
                nptr->data=tptr->data;
                tptr->data=temp;
            }
            nptr=nptr->next;

        }
        tptr=tptr->next;
    }
    node*list=head1;
    while(list!=NULL)
    {
        cout<<list->data<<" ";
        list=list->next;
    }
    cout<<endl;

    cout<<"desending"<<endl;
     head1=head;
    tptr=head1;
     temp=0;
    while(tptr!=NULL)
    {
        nptr=tptr->next;
        while(nptr!=NULL)
        {
            if(tptr->data<nptr->data)
            {
                temp=nptr->data;
                nptr->data=tptr->data;
                tptr->data=temp;
            }
            nptr=nptr->next;

        }
        tptr=tptr->next;
    }
    list=head1;
    while(list!=NULL)
    {
        cout<<list->data<<" ";
        list=list->next;
    }






    return 0;
}
