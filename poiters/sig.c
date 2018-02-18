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
#if front
  newnode->next = head;
  head = newnode;
#endif

#if back
  newnode->next  = NULL;
  if(curr ==NULL)
  head=curr= newnode;
  else
  curr->next = newnode;
  curr=newnode;
#endif
} 

void revese(struct link *head)
{
  if(head==NULL)
   return;
  revese(head->next);
  printf("[%d]->",head->data);
}

void delete(int data)
{
 struct link *p,*pr;
 p =head;
 printf("...%d\n",head->data);
 while(p->data !=data)
 {
 pr=p;
 p=p->next;
 }
pr->next=p->next;
free(p);
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
}

main()
{
 
 addnode(2);
 addnode(3);
 addnode(4);
 addnode(5);
 addnode(6);
 addnode(7);
 print();
 printf("\n");
// revese(head); printf("\n");
 delete(3);
 print();
 printf("\n");
}




