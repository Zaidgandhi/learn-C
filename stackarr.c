#include<stdio.h>

#define Max 4

int st[Max];
int top=-1;
int val;

void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void disp(int st[]);
 int main()
 { 
     
     
printf("Enter the number to be pushed\t");
scanf("%d",&val);
push(st,val);
disp(st);

printf("\nThe number is %d",peek(st));

printf("\nThe number pop is %d",pop(st));
 printf("\n");
 }

 void push(int st[], int val)
 {
  if(top==Max-1)
  {
      printf("Overflow Condition");
  }
  else
  {
      top++;
      st[top]=val;
  }
 }

 int peek(int st[])
 {
   if(top==-1)
   {
       printf("Stack is empty");
       return -1;
   }
   else
   {
       return (st[top]);
   }
 }

 int pop(int st[])
 { 
     int val;
   if(top==-1)
   {
     printf("\nunderflow condition");
     return -1;
   }
   else
   {
       val=st[top];
       top--;
       return val;
   }  
 }
  void disp(int st[])
  {
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
           printf("\n%d",st[i]);
           printf("\n");
        }
        
    }
    
  }