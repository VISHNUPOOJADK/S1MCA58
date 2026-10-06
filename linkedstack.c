#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *top=NULL;
void push()
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
			{
				printf("\n No Space Available");
				return;
			}	
		newnode->link=NULL;
 		printf("\n Enter the value to insert :\n");
 		scanf("%d",&newnode->data);
 		if(top==NULL)
 		{
 		  top=newnode;
 		}
 		else
 		{
 		  newnode->link=top;
 		  top=newnode;
 		}
 		printf("\n Element Inserted %d",newnode->data);
	}
void pop()
	{
		struct node *temp=top;

		if(top==NULL)
		{
		 printf("\n stack underflow");
		 return;
		}
		printf("\n %d is popped:",temp->data);
		top=temp->link;
 		free(temp);
 	}
 void peek()
 	{
 		struct node *temp=top;
 		if(top==NULL)
 		{
 		printf("\n stack underflow");
 		return;
 		}
 		printf("top element is %d",temp->data);
 	}
void display()
	{		
		struct node *temp=top;
		if(top==NULL)
		{
		printf("\n list empty");
		return;
		}
		printf("\n elements in the stack\n");
		while(temp!=NULL)
		{
		printf("%d \t",temp->data );
		temp=temp->link;
		}
	}	
void search()
	{
		struct node *temp=top;
		int key,found=0;
		if(top==NULL)
		{
		printf("\n empty list\n");
		return;
		}		
		printf("\n enter the value to search:");
		scanf("%d",&key);
		while(temp!=NULL)
		{
		if(temp->data==key)
		{
		printf("%d value founded \n",temp->data);
		found=1;
		}
		temp=temp->link;
		}
		if(!found)
		{
		printf("value %d not exist",key);
		}
	}
void main()
{
int choice;
printf("\n  linked list using stack\n");
do
{
printf("\n\n\n 1->push()\n 2->pop() \n 3->peek()\n 4->display\n 5->search\n 6->exit\n ");
printf("\n enter choice:\n");
scanf("%d",&choice);
switch(choice)
    {
	case 1:
	    push();
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
	    search();
	    break;
	 case 6:
	   printf("\n exit-------");
	    break;
	default:
	    printf("\n enter a valid choice:");
	}
}
while(choice!=6);
}	     
	    
