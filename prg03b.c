
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 25

int top=-1;
char stack[50];
void push(char x)
{
 stack[++top]=x;
}
char pop()
{
   if(top==-1)
     return -1;
   else
     return stack[top--];  
}
int priority(char x)
{
  if(x=='(')
     return 0;
  if(x=='+' || x=='-')
     return 1;
  if(x=='*' || x=='/')
     return 2;
return  0;              
}
void reverse(char *exp)
{
   char temp[50];
   int size=strlen(exp);
   temp[size--]='\0';
   int i=0;
   while(exp[i]!='\0')
   {
      temp[size]=exp[i];
      i++;
      size--;
   }
   strcpy(exp,temp);
}
void brackets(char *exp)
{
   int i=0;
   while(exp[i]!='\0')
   {
       if(exp[i]==')')
         exp[i]='(';
       else if(exp[i]=='(')
         exp[i]=')';
         i++;  
   }
}
void postfix(char exp[])
{
    char temp,postfix[50];
    int j=0,i=0;
    temp=exp[i];
    char x;
    while(exp[i]!='\0')
    {
       temp=exp[i];
       if(isalnum(temp))
         postfix[j++]=temp;
       else if(temp=='(')
         push(temp);
       else if(temp==')')
       {
         while((x=pop())!='(')
         postfix[j++]=x;
       }
       else
       {
         while(priority(stack[top])>=priority(temp))
         
            postfix[j++]=pop();
            push(temp);
         
       } 
       i++; 
    }
    while(top!=-1)
    {
       printf("%c",pop());
    }
    strcpy(exp,postfix);
    
}

int main()
{
   char exp[50];
   printf("enter the expression");
   scanf("%s",exp);
   reverse(exp);
   brackets(exp);
   postfix(exp);
   reverse(exp);
   printf("%s",exp);
}

