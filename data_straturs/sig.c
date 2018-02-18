#include <stdio.h>
#include <stdlib.h>

struct link 
{
 int data;
 struct link *next;
};

struct link *head =NULL,*curr =NULL;

void addnode(int data)
{
  struct link *newnode = (struct link *) malloc(sizeof(struct link));
  newnode->data = data;
#if pheadd
  newnode->next = head;
  head = newnode;
#endif

#if ptail
  newnode->next  = NULL;
  if(curr ==NULL)
  head=curr= newnode;
  else
  curr->next = newnode;
  curr=newnode;
#endif
} 

void revese(struct link *phead)
{
  
  if(phead==NULL)
   return;
  revese(phead->next);
  printf("[%d]->",phead->data);
}

void delete(int data)
{
 struct link *p,*pr;
 p =head;
 while(p->data !=data)
 {
 pr=p;
 p=p->next;
 }
pr->next=p->next;
free(p);
}

void add_tail(int data)
{

struct link *newnode,*p,*prev;

   newnode = (struct link *)malloc(sizeof(struct link));
   newnode->data = data;
   newnode->next = NULL;
   p=head;
   while(p->data<data)
  {
    prev = p;
    p=p->next;
  }
  prev->next = newnode;
  newnode->next=p;

}

void print()
{
 struct link *p;
 p=head;
 
 while(p!=NULL)
 {
 printf("[%d]->",p->data);
 p=p->next;
 }
printf("\n");   
}




main()
{
 
 int i;
 
 addnode(10);
 addnode(20);
 addnode(30);
 addnode(40);
 addnode(50);
 addnode(60);
 print();
 delete(30);
 print(); 
 //print();
// addnode(30);
 add_tail(25);
 //delete(30);
// revese(head); printf("\n");
 print(); 

 printf("\n");
}




