#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int item)
{
   if(rear==MAX-1)
   {
   printf("queue overflow");
   }
   else
   {
     if(front==-1)
     {
     front=0;}
     rear++;
     queue[rear]=item;
     printf("%d inserted into the queue.\n",item);
     
    }
}
void dequeue()
{
     if(front==-1 || front>rear)
     {
       printf("\n queue underflow");
      }
     else
     {
     printf("deleted element is %d \n",queue[front]);
     if(front==rear)
     {
     front=rear=-1;
     }
     else
     {
     front++;
     }
     }
}
void display()
{
int i;
   if(front==-1)
   {
    printf("\n queue is empty");
   }
   else
   {
    printf("\n queue elements :\n");
    for(i=front;i<=rear;i++)
      {
        printf("%d \t",queue[i]);
      }
    }
}
void peek()
{
  if(front==-1)
  {
    printf("queue is empty\n");
  }
  else
  {
  printf("The first element is :%d",queue[front]);
  }
}
void main()
{
   int choice,item;
   do
   { 
     printf("\n ---------------QUEUE OPERATIONS----------\n");
     printf("\n 1.ENQUEUE\n");
     printf("\n 2.DEQUEUE\n");
     printf("\n 3.DISPLAY\n");
     printf("\n 4.PEEK\n");
     printf("\n 5.EXIT\n");
     printf("\n enter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
     	 	case 1:
     	 	  	printf("enter the element to be inserted:");
     	 	  	scanf("%d",&item);
     	 	  	enqueue(item);
     	 	  	break;
     	 	case 2:
     	 		dequeue();
     	 		break;
     	 	case 3:
     	 		display();
     	 		break;
     	 	case 4:
     	 		peek();
     	 		break;
     	 	case 5:
     	 		printf("\n exiting the program:");
     	 		break;
     	 	default:
     	 		printf("\n Invalid choice");
      }
      }
      while(choice!=5);
     
}
      
      		
     
     
