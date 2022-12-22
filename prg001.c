

//Program to implement a stack using array implementation//
#include<stdio.h> //standard input output header file//
#include<stdlib.h>
#define SIZE 4 //declaring the stack size//
int top=-1, inp_arr[SIZE]; //declaring the initial value //
void push();
void pop();
void display();
int main()
{
int choice;
while(1)
{
printf("OP performed by stack");
printf("\n 1 push \n 2 pop \n 3 display \n 4 Exit \n");
printf("\n enter choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1: push();
      break;
case 2: pop();
      break;
case 3: display();
      break;
case 4: exit(0);
        break;
   default: printf("invalid choice");
   }
   }
   }
 void push()
 {
 int x;
 if(top==SIZE-1)
 {
 printf("overflow\n");
 }
 else
 {
 printf("enter the element to be inserted");
 scanf("%d",&x);
 top = top+1;
 inp_arr[top]=x;
 }
 }
 void pop()
 {
 if(top == -1)
 {
 printf("Under flow");
 }
 else
 {
 printf("popped element:%d",inp_arr[top]);
 top=top-1;
 }
 }
 void display()
 {
 if(top== -1)
 printf("underflow\n");
 else
 printf("element present in stack");
 int i;
 for(i=top;i>=0;i++);
 {
 printf("%d\n",inp_arr[i]);
 }
 }

