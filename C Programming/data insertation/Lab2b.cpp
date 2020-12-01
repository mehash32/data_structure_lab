#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    node *next;
};
struct node *head,*ptr,*ptr1,*temp;
//void specified_insertion();
//void insertion_first();

int main()
{
    int i=0,n,flag=0;
    printf("Enter Number of Node\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ptr=new(node);
        printf("Enter Node Data\n");
        scanf("%d",&ptr->data);
        if(i==0)
        {
            head=temp=ptr;
            continue;
        }
        temp->next=ptr;
        temp=ptr;
    }
    ptr->next=NULL;
    ptr=head;
    printf("Before Insertion The List is\n");
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");


   int item,item1;
    struct node *ptr, *temp;
    printf("Enter Data after Which Node will be Inserted\n");
    scanf("%d",&item1);
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed!\n");
    }
    else
    {


        scanf("%d",&item);
        ptr->data=item;
        temp=head;
        while(temp->data!=item1)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Can't Insert!\n");
                return 0;
            }

        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("Node Inserted\n");
    }
    printf("\n\n");





    printf("After Insertion The List Will be\n");
    ptr1=head;
    while (ptr1!=NULL)
    {
        printf("%d ",ptr1->data);
        ptr1=ptr1->next;
    }

}





/*void specified_insertion()
{
    int i,position,item,item1;
    struct node *ptr, *temp;
    printf("Enter Data after Which Node will be Inserted\n");
    scanf("%d",&item1);
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed!\n");
    }
    else
    {
        //printf("Enter the Position  Node will be Inserted\n");
        //scanf("\n%d",&position);
        printf("Enter Node Data\n");
        scanf("%d",&item);
        ptr->data=item;
        temp=head;
        while(temp->data!=item1)//for(i=0;i<position-2;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Can't Insert!\n");
                return;
            }

        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("Node Inserted\n");
    }
    printf("\n\n");
}*/
