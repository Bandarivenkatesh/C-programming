#include <stdio.h>
#include <stdlib.h>
struct linking 
{
   int data;
   struct linking *next;
};

struct linking *head;

void insed_node(int data)
{ 
struct linking *newnode = (struct linking *)malloc(sizeof(struct linking *));

   newnode->data = data;
   newnode->next = head;
   head = newnode;

}

void reverse(struct linking *head)
{
   if(head==NULL)
    return;
   reverse(head->next);
   printf("%d->",head->data);
   printf("%p\n",head->next);

}

void print()
{
  struct linking *p;
  p = head;
  while(p!= NULL)
  {
    printf("%d->",p->data);
    printf("%p\n",p->next);
    p=p->next;
  }
}

main()
{
  head = NULL;
  insed_node(1);
  insed_node(4);
  insed_node(6);
  print();
  printf("\n");
  reverse(head);
}

