//Be carefull using '\n' it causes problem
#include<stdio.h>
#include<stdlib.h>
void insert(int);
void display();
void insertfirst(int);
void insertlast(int);
void insertany(int ,int);
void deletefirst();
void deletelast();
struct node
{
 int data;
 struct node *next;
};
struct node *head=NULL;
void main()
{
 insert(4);
 insert(10);
 insert(34);
 display();
 insertfirst(6);
 printf(" after insertion at first position ");
 display();
 printf(" after insertion at last position ");
 insertlast(55);
 display();
 insertany(4,3);
 printf("\n insertion after any particular value\n");
 display();
 deletefirst();
 printf("\nafter deletion of first node\n");
 display();
 deletelast();
 printf("\n after deletion of last node\n");
 display();
}
void insert(int value)
{
struct node *temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
  {printf("failed to allocate memory \n");}
else
 {
  temp->data=value;
  temp->next=head;
  head=temp;
 }
}
void display()
{
    printf("elements of linked list are: ");
    if(head==NULL)
     {printf("Linked list is empty ");}
    else
    {
     struct node *ptr=head;
     while(ptr!=NULL)
     {
        printf("%d ",ptr->data);
        ptr=ptr->next;
     }
    }
}
void insertfirst(int data)
{ struct node *new=(struct node *)malloc(sizeof(struct node));
  if(new==NULL)
  {printf("failed to allocate memory \n");}
 else
  {
   new->data=data;
   new->next=head;
    head=new;
  }
}
void insertlast(int v)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
  if(p==NULL)
  {printf("failed to allocate memory \n");}
 else
  {
    p->data=v;
    struct node *t=head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=p;
    p->next=NULL;
  }
}
void insertany(int value,int n)
{
struct node *temp2=head->next;
struct node *t=head;
struct node *temp1=(struct node *)malloc(sizeof(struct node));
if(temp1==NULL)
  {printf("failed to allocate memory \n");}
else
 {
  temp1->data=n;
  while((temp2->next!=NULL)&&(temp2->data!=value))
  {
     t=t->next;
   temp2=temp2->next;
  }
  if(temp2->data==value)
  {
   temp1->next=temp2;
   t->next=temp1;
  }
  else
  {
     printf("\nvalue not found");
  }
 }
}
void deletefirst()
{
 if(head==NULL)
 {
     printf("linked list is empty\n");
 }
 else
 {
     head=head->next;
 }
}
void deletelast()
{
 if(head==NULL)
  {
      printf("linked list is empty\n");
  }
 else
  {
    struct node *m=head->next;
    struct node *n=head;
    while(m->next!=NULL)
    {
        n=n->next;
        m=m->next;
    }
    n->next=NULL;
  }
}
