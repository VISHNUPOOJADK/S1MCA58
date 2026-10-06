#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
int isFull()
    {
	if((rear+1)%MAX==front)
     	{
	   return 1;
        }
        return 0;
     }
int isEmpty()
{
	if(front==-1 && rear==-1)
	  {
	     return 1;
	  }
	  return 0;
}
void display()
{
int i;
if(isEmpty())
	{
	 printf("\n queue is empty\n");
	 return;
	 }
	 printf("\n Queue elements:");
	 i=front;
	 do
	 {
	 printf("%d \t",queue[i]);
	 i=(i+1)%MAX;
	 }
	 while(i!=(rear+1)%MAX);
}
void dequeue()
{
	if(isEmpty())
	{
	printf("\n Queue is empty\n");
	return;
	}
	printf("\n %d is deleted \n",queue[front]);
	if(front==rear)
	{
	front=rear=-1;
	}		
	else
	{
	front=(front+1)%MAX;
	}
}
void enqueue()
	{
		int x;
		if(isFull())
		{
		printf("\n Queue is full\n");
		return;
		}		
		printf("\n enter the element to insert:");
		scanf("%d",&x);
			if(isEmpty())
			{
			front=rear=0;
			}
			else
			{
			rear=(rear+1)%MAX;
			}
			queue[rear]=x;
	    printf("\n element %d inserted successfully\n",queue[rear]);
}
void search()
{
int key,i,found=0;
	if(isEmpty())
	{
	printf("\n queue is empty");
	return;
	}
printf("\n enter the element to saerch:");
scanf("%d",&key);
i=front;
	do
	{	
	  if(queue[i]==key)
	  {
		printf("\n element %d found at position %d\n",key,i);
		found=1;
		break;
	   }
	  i=(i+1)%MAX;
	}
while(i!=(rear+1)%MAX);
	if(!found)
	{
	printf("\n element %d not found in the queue\n",key);
	}
}
int main()
{
int choice;
printf("\n circular queue using array");
	do
	{
		printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display\n 4.Search\n 5.Exit\n");
		printf("\n enter your choice:");
		scanf("%d",&choice);
	 switch(choice)
	  {		
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			search();
			break;
		case 5:
			printf("\n exiting----\n");
			return 0;
		default :
			printf("\n Invalid choice");
	}
     }
 while(choice!=5);
return 0;
}


