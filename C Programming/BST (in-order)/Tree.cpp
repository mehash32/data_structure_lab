#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *lchild;
    node *rchild;
};
void inorder(node *curptr)
{
    if(curptr!=NULL)
    {
        inorder(curptr->lchild);
        cout<<curptr->data<<" ";
        inorder(curptr->rchild);
    }
}

int main()
{
    node *nptr,*lchild,*rchild,*temptr,*parentptr,*treeptr=NULL;
    int i,j,item,k,n;
    cout<<"Enter the number of nodes:\n";
    cin>>n;
    cout<<"Input the data\n";
    for(i=1; i<=n; i++)
    {
        nptr=new(node);
        cin>>item;
        nptr->data=item;
        nptr->lchild=NULL;
        nptr->rchild=NULL;
        if(treeptr==NULL)
        {
            treeptr=nptr;
        }
        else
        {
            temptr=treeptr;
            while(temptr!=NULL)
            {
                parentptr=temptr;
                if(temptr->data>=nptr->data)
                {
                    temptr=temptr->lchild;
                }

                else
                {
                    temptr=temptr->rchild;
                }

            }
            if(parentptr->data>=nptr->data)
            {
                parentptr->lchild=nptr;
            }
            else
                parentptr->rchild=nptr;
        }
    }
    node *xptr;
    xptr=treeptr;
    inorder(xptr);





}
