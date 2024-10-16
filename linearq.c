//Linear queue operations
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=-1,rear=-1;  
void main()
{
  int data,opt,tfront,ans;

 void insertq(int);
 int deleteq();
 int searchq(int);
 do
 {
  printf("1.Insert\n");
  printf("2.Delete\n");
  printf("3.Search\n");
  printf("4.exit\n");
  printf("5.your option:");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:printf("data:");    
          scanf("%d,",&data);
          insertq(data);
          break;
   case 2:data=deleteq();
          printf("deleted item = %d\n",data);
          break;
   case 3:printf("item to search:");
          scanf("%d",&data);
          ans=searchq(data);
          if(ans==1)
            printf("found\n");
          else
            printf("not found\n");
          break;
   case 4:exit(0);
  }
 }
while(1);
}
//function to insert an item
void insertq(int item)
{
 if(rear==SIZE-1)
  printf("Queue is full\n");
 else
  que[++rear]=item;
  }
  
//function to delete an item

int deleteq()
{
 if(front==rear)
  {
   printf("Queue is empty \n");
   exit(1);
   }
 else
  return que[++front];
  }
//function to search an item in queue

int searchq(int item)
{
 int tfront=front+1;
 //searching
 
 while(tfront!=rear && que[tfront]!=item)
    ++tfront;
 if(que[tfront]==item)
   return 1;
   
   return 0 ;
  }
 
 
