/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<ctype.h>
char stack[20];
int top=-1;//initializing top value to -1//
void push(char x)//user defined function//
{
  stack[++top]=x;
}
char pop()//user defined function//
{
 if(top==-1)
  return -1;
 else
  return stack[top--]; 
}
int priority(char x)//user defined function//
{
  if(x=='(')
   return 0;
  if(x=='+' || x=='-')
   return 1;
  if(x=='*' || x=='/')
   return 2; 
}

int main()
{
 char exp[30];
 char *e,x;
 printf("enter the expression\n");
 scanf("%s",exp);
 e=exp;
 while(*e!='\0')
 {
   if(isalnum(*e))
     printf("%c",*e);
   else if(*e=='(')
     push(*e);
   else if(*e==')')
   {
      while((x==pop())!='(')
       printf("%c",x);
          
   } 
   else
   {
     while(priority(stack[top])>=priority(*e))
      printf("%c",pop());
      push(*e);
            
   }   
   e++;
 }
 while(top!=-1)
 {
    printf("%c",pop());
 }
 return 0;
}

