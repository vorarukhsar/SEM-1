


#include<stdio.h>
#define n 5
stack[n];
int top=-1;
void push();
void pop();
void display();

int main()
{ int x,i,choice;
printf("Enter size of stack");
scanf("%d",&n);

printf("1.push\n 2.pop\n 3.display");
do
{
printf("Enter choice");
scanf("%d",&choice);

switch (choice)
{
case 1:
{
push();
break;
}
case 2: 
{
    pop();
    break;
}
case 3:
{
    display();
    break;
}
default:
{
    printf("enter proper  choice");
}

}
}
while(choice!=4)
return 0;
}

void push()
{int x;
    if(top>=n-1)
{
    printf("stack is full");
}
    else
    {
        printf("Enter the Value");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
}

void display()
{ 
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        int i;
    for(i=top;i>=0;i--)
    printf("Display Element Is %d",stack[i]);
    }
}

pop()
{
    if(top==-1)
    {
        printf("no eement available");
    }
    else
    {
        printf("Delete element is %d",stack[top]);
        top--;
    }
}