//Circular queue operations
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=0,rear=0; //empty queue  
void main()
{
  int data,opt,ans;

 void insertq(int);
 int deleteq();
 int searchq(int);
 do
 {
  printf("1.Insert\n");
  printf("2.Delete\n");
  printf("3.Search\n");
  printf("4.Exit\n");
  printf("5.your option:");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:printf("data:");    
          scanf("%d",&data);
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
//function to insert an item in circular queue
void insertq(int item)
{
 int trear=rear;
 trear=(trear+1)%SIZE;
 if(trear==front)
   printf("queue is full");
 else
   {
    rear=trear;
    que[rear]=item;
   }
    }
//function to delete an item in circulr queue
int deleteq()
{
 if(front==rear)
 {
  printf("Queue is empty \n");
  exit(1);
  }
 else
 {
  front=(front+1)%SIZE;
  return que[front];
  }
}
//function to search an item in queue

int searchq(int item)
{
 int tfront=front;
 if(tfront!=rear)
 {
 do
   tfront=(tfront+1)%SIZE;
 while(tfront!=rear && que[tfront]!=item);
   
 if(que[tfront]==item)
   return 1;
 else
   return 0 ;
  }
  return 0;
  }
 
