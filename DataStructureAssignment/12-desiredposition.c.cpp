#include <stdio.h>
#include<stdlib.h>

/*Write a C Program to insert a node into a simple linked list at the desired location.*/
void create();
void insertAtMiddle(int , int);
void deleteAtMiddle(int);
void display();
struct node {
   int data;
   struct node *next;
};
struct node *first=NULL;
struct node *last=NULL;
int main()
{
	create();
	create();
	create();
	display();
	insertAtMiddle(5 , 2);
	display();
	deleteAtMiddle(3);
	display();
}
void create()
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter value in list:-");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(first==NULL)
	{
		first=newnode;
		last=newnode;
	}
	else
	{
		last->next=newnode;
		last=newnode;
	}
}
void insertAtMiddle(int no , int pos)
{
	int i;
	struct node *newnode , *temp;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("Unable to allocate memory");
		
	}
	else
	{
		newnode -> data = no;
		newnode->next = NULL;
		temp=first;
		for(i=2;i<=pos-1;i++)
		{
			temp=temp->next;
			if(temp == NULL)
				break;
		}
		if(temp != NULL)
		{
			newnode ->next = temp ->next;
			temp->next=newnode;
			printf("element inserted \n");
		}
		else
		{
			printf("Cant insert at given position \n ");
		}
		
	}
	
}
void deleteAtMiddle(int pos)
{
	int i;
	struct node *temp , *prevnode;
	if(first == NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp = first;
		prevnode =first;
		for(i=2;i<=pos;i++)
		{
			prevnode = temp;
			temp = temp -> next;
			if(temp == NULL)
				break;
		}
		if(temp != NULL)
		{
			if (temp == first)
				first = first -> next;
			prevnode ->next =temp ->next;
			temp->next = NULL;
			free(temp);
			printf("Successfully deleted from middle\n");
			
		}
	  else
	  {
		  printf("invalid position unable to delete \n");
	  }
	}
}
void display() 
{
	struct node *temp;
	for(temp=first;temp!=NULL;temp=temp->next)
	{
		printf("The elements of link list are :- %d \n ", temp->data);
	}
	
}
