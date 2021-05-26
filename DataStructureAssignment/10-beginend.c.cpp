#include <iostream>

/*Write a C Program to insert and delete a node into a simple linked list at the beginning and end. 
*/

#include <stdio.h>
#include<stdlib.h>
void insertAtEnd();
void insertAtBegin(int);
void deleteFirstNode();
void deleteLastNode();
void display();

struct node {
   int data;
   struct node *next;
};
struct node *first=NULL;
struct node *last=NULL;

int main()
{
	int keyToSearch , index;
	insertAtEnd();
	insertAtEnd();
	insertAtEnd();
	display();
	insertAtBegin(5);
	display();
	deleteFirstNode();
	display();
	deleteLastNode();
	display();
	
}
void insertAtEnd()
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
void insertAtBegin(int no)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data = no;
		newnode->next=first;
		first = newnode;
		printf("insertion done\n");
}
void deleteFirstNode()
{
	struct node *temp;
	if(first == NULL)
	{
		printf("list is alredy empty");
	}
	else
	{
		temp = first;
		first = first ->next;
		printf("\n Data deleted = %d \n" , temp->data);
		free(temp);
		printf("detetion done\n");
		
	}
}
void deleteLastNode()
{
	struct node *temp , *secondLastNode;
	if(first == NULL)
	{
		printf("list is alredy empty");
	}
	else
	{
		temp = first;
		secondLastNode = first;
		while(temp->next != NULL)
		{
			secondLastNode = temp;
			temp = temp->next;
		}
		if(temp==first)
		{
			first = NULL;
		}
		else
		{
			secondLastNode -> next = NULL;
			
		}
		free(temp);
		printf("\n last node deleted \n");
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
