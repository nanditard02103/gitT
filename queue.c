//Implementation of queue using linked lists

#include<stdio.h>
#include<stdlib.h>

struct node   // creating a node 
{
  int data;
  struct node *next;
};

struct node *front,*rear;

void insert()  // function to insert element into queue
{
  struct node *ptr=(struct node *)malloc(sizeof(struct node));
  int item;
  if(ptr==NULL)  //checking if queue is full
  {
    printf("Overflow");
    return;
  }
  else
  {
    printf("Enter the element : ");
    scanf("%d",&item);
    
    ptr->data=item;
    if(front==NULL)
    {
      front=ptr;
      rear=ptr;
      front->next=NULL;
      front->next=NULL;
    }
    
    else
    {
      rear->next=ptr;
      rear=ptr;
      rear->next=NULL;
    }
   }
}

void delete()  //function to delete the first element of the queue
{
  struct node *ptr=(struct node *)malloc(sizeof(struct node));
  if(front==NULL)  //checking if queue is empty
  {
    printf("Underflow");
    return ;
  }
  
  else
  {
    ptr=front;
    printf("deleted element %d\n",ptr->data);
    front=front->next;
    free(ptr);
  }
}

void display()  //function to display 
{
  struct node *ptr;
  ptr=front;
  if(ptr==NULL)   //checking if queue is empty
  {
    printf("Underflow");
    return ;
  }  
  
  else
  {
    printf("Printing elements \n");
    while(ptr!=NULL)
    {
      printf("%d\n",ptr->data);
      ptr=ptr->next;
    }
  }
}

int main()
{
  int choice;
  while(1)
  {
    printf("Select the operation\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n"); 
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: insert();
              break;
      case 2: delete();
              break;
      case 3: display();
              break;
      case 4: exit(0);
      default: printf("Invalid choice");
              break;
     }   
   }
  return 0;
  
}