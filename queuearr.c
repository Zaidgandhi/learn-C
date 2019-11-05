#include<stdio.h>
#define MAX 4

int q[4];
int rear=-1;
int front=-1;
int num;

void insert(void);
int del();
int peek();
void disp(void);

int main()
{  
  for (int i = 0; i < 5; i++)
  {
     insert();   
  }
disp();
printf("\n");       
  for(int i = 0; i < 3; i++)
  {
     printf("The peek number is %d\n",peek());
     printf("The deleted number is %d\n",del());
  }
  
disp();
printf("\n");
  return 0;
}


void insert()
{ 
    printf("Enter the numbers\n");
    scanf("%d",&num);
    if(rear==MAX-1)
    {
     printf("overflow conditon\n");
    }
    else if(front == -1 && rear == -1)
    {
        front=rear=0;
        q[rear]=num;
    }
    else
    {
        rear++;
        q[rear]=num;
    }
    
}
int del()
{
    if(front==-1 && rear==-1)
    {
     printf("Underflow condition\n");
     return -1;
    }
    else
    {
        num=q[front];
        front++;
        return num;
    }
}
int peek()
{
    if(front == -1)
    {
        printf("queue is empty\n");
        return -1;
    }
    else
    {
      if(front>rear)  
       {
        return q[front];
       }
       return q[front];
    }
}
void disp()
{
    printf("\n");
    if(front ==-1 || front>rear)
    {
        printf("Queue is empty\n");
    }
    else 
    {
     for (int i = front; i <=rear; i++)
      {
        printf("\t%d",q[i]);
      }
    }
}


