#include<stdio.h>
#define size 5

/*Write a C Program for implementation of Queue using Array.
*/



int q[size];
int front = -1;
int rear = -1;

void que_insert(int);
void que_delete();
void que_display();

int main()
{
	int value;
	printf("Enter value to insert in the Queue:-");
	scanf("%d",&value);
	que_insert(value);
	que_insert(2);
	que_display();
	que_delete();
	que_display();
	que_delete();
	que_display();
  
}

void que_insert(int value) 
{
  if (rear <= size-1)
  {
     rear=rear+1;
	 q[rear]=value;
	 if(front==-1)
		 front=0;
  }
  else
  {
	  printf("Queue is Full \n ");
  }
}

void que_delete() 
{
  if (front == -1)
  {
    printf("Queue is Empty \n");
  }
  else
  {
    printf("the element deleted is : %d \n",q[front]);
  }
  if (front == rear)
  {
      front = rear = -1;
  }
  else
  {
	  front=front+1;
  }
}

void que_display() 
{
	int i;
  if (rear == -1)
  {
    printf("Queue is Empty \n");
  }
  else 
  {
    for (i = front; i <= rear; i++)
	{
		printf("Elements in queue is %d :\n",q[i]);

	}
  }
}
