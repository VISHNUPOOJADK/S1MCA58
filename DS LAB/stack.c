#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int item)
{
if(top==MAX-1
)
{
printf("\n STACK Overflow");
return;
}
stack[++top]=item;
printf("\n %d pushed to stack.",item);
}
void pop()
{
if(top==-1)
{
printf("\n STACK Underflow");
return;
}
printf("\n %d popped from stack.",stack[top--]);
}
void peek()
{
if(top==-1)
{
printf("\n STACK is empty!");
return;
}
printf("\n top element is %d",stack[top]);
}
void display()
{
if(top==-1)
{
printf("\n stack is empty!");
return;
}
printf("\n stack elements are:");
for(int i=top;i>=0;i--)
{
printf("%d \t ",stack[i]);
}
}
void main()
{
int choice,value;
while(1)
{
printf("\n\n stack operations menu:");
printf("\n 1.PUSH");
printf("\n 2.POP");
printf("\n 3.PEEK");
printf("\n 4.DISPLAY");
printf("\n 5.EXIT");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
   printf("\n enter value to push:");
   scanf("%d",&value);
   push(value);
   break;
 case 2:
 
   pop();
   break;
 case 3:
  peek();
   break;
case 4:
  display();
   break;
 case 5:
  printf("\n exiting program");
   return;
 default:
 printf("\n Invalid choice!");
 }
 }
 }

