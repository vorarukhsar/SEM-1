#include<stdio.h>
#define n 5
int queue[n];
int front=-1;
int rear=-1;
void enqueue(int x);
void dequeue();
void display();

void main()
{
    enqueue(2);
    enqueue(4);
    display();
    
}

void enque(int x)
{
    if(rear==n-1)
    {
        printf("queue is full");
    }
    else if (front==-1 && rear ==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}


void dequeue()
{
    if(front==-1)
    {
        printf("queue empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else{
        printf("delete element is %d",queue[front]);
        front++;
    }
}

void display()
{int i;
    if(rear==-1)
    {
        printf("no element to display");
    }
    else(i=rear;i>=rear;i++);
    
        printf("elment in stack is %d",queue[rear]);
    
}