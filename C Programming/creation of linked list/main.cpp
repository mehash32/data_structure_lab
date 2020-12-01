#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node* next;

};
 node *fptr,*nptr,*tptr;
int item;

void insert()
{
        fptr=NULL;
        nptr=new (node);
        cin>>item;
        nptr->data=item;
        nptr->next=NULL;
        if(fptr==NULL)
        {
            fptr=nptr;
            tptr=nptr;

        }
        else
        {
            tptr->next=nptr;
            tptr=nptr;
        }
    }

void display()
{

   struct node* tptr;
   tptr = fptr;
   while(tptr != NULL) {
      cout<< tptr->data <<" ";
      tptr = tptr->next;
}
}





int main()
{
insert();
insert();insert();
insert();
display();





    return 0;
}
