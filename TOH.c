#include<stdio.h>
void main()
{
 int num;
 printf("enter the no of disks \n");
 scanf("%d",&num);
 printf("the sequence of moves involved");
 towers(num,'A','C','B');
 return;
}
void towers(int num,char frompeg,char topeg,char auxpeg)
{
  if(num==1)
  {
    printf("move disk 1 frompeg %c topeg %c \n",frompeg,topeg);
    return;
  }
  towers(num-1,frompeg,auxpeg,topeg);
  printf("move disk%d frompeg %c topeg %c \n",num,frompeg,topeg);
  towers(num-1,auxpeg,topeg,frompeg);
} 