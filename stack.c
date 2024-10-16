#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE];
int sp=-1;  //empty stack
void main()
{
 int opt,data;
 void push(int);
 int pop();
 void display();
 do
 {
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.display\n");
  printf("4.exit\n");
  printf("5.your option:");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:printf("data");    
          scanf("%d,",&data);
          push(data);
          break;
   case 2:data=pop();
          printf("poped item = %d\n",data);
          break;
   case 3:display();
          break;
   case 4:exit(0);
  }
 }
while(1);
}
//function to push an item
void push(int data)
{
 if(sp==SIZE-1)
  printf("full stack\n");
 else
  stack[++sp]=data;
  }
//function to delete an item

int pop()
{
 if(sp==-1)
   {printf("empty stack\n");
   exit(1);
   }
 else
  return stack[sp--];
}
//function to display stack

void display()
{
 int tsp=sp;
 printf("stack contents:\n");
 while(tsp!=-1)
 {
printf("%d\n",stack[tsp]);
 tsp--;
 }
 if (sp==-1)
 {
  printf("empty stack\n");
  exit(1);
  }
  printf("\n");
  }
 
 
