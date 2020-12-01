#include<bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node *back;
   struct Node *next;
};
struct Node* fptr = NULL;
struct node *nptr;
void insert(int item) {
   nptr=new(Node);
   nptr->data  = item;
   nptr->back = NULL;
   nptr->next = fptr;
   if(fptr !=  NULL)
      fptr->back = nptr ;
   fptr = nptr;
}
void display() {
   struct Node* tptr;
   tptr = fptr;
   while(tptr != NULL) {
      cout<< tptr->data <<" ";
      tptr = tptr->next;
  }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: ";
   display();
   return 0;
}
