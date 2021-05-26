


#include<stdio.h>
int swap(int*,int*);
void main()
{
int a,b;
printf("Enter Value of a \n");
scanf("%d",&a);

printf("Enter Value of b \n");
scanf("%d",&b);

printf("Before Swapping\n a=%d \n and b=%d \n ",a,b);
swap(&a,&b);

printf("After swapping \n a=%d \n and b=%d \n",a,b);

}

int swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
