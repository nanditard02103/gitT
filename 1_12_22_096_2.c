/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
  int val;
  struct node * next;
};
struct node * head;
void push()
{
   int val;
   struct node * ptr=(struct node *)malloc(sizeof (struct node));
   if(ptr==NULL)
   {
     printf("not able to push the element");
   }
   else
   {
     printf("enter the value");
     scanf("%d",&val);
     if(head==NULL)
     {
       ptr->val=val;
       ptr->next=NULL;
       head=ptr;
     }
     printf("iten pushed");
   }
}
void pop()
{
  int item;
  struct node *ptr;
  if (head==NULL)
  {
    printf("under flow");
  }
   else
  {
   item=head->val;
   ptr=head;
   head=head->next;
   free(ptr);
   printf("item poped");
  }
}
void display()
{
  int i;
  struct node *ptr;
  ptr=head;
  if(ptr==NULL)
  {
    printf("stack is empty");
  }
  else
  {
    printf(" printing stack elements");
    while(ptr!=NULL)
    {
     printf("%d\n",ptr->val);
     ptr=ptr->next;
    }
  }
}
void main()
{
  int choice;
  printf("op performed on stack");
  while(1)
  {
   printf ("\n 1 push \n 2 pop \n 3 display \n 4 exit \n");
   printf("enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1: push();
          break;
    case 2 : pop();
          break;
    case 3:display();
         break;
    case 4:exit(0);
   }
  }
}

