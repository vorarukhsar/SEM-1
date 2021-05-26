#include<stdio.h>
//int num(int *a,int *b)

void main()
{
    int num1,num2,sum=0,*a,*b,sub=0,mul=0,div=0;
  printf ("Enter num 1 \n Enter num 2 \n");
  scanf("%d  \n %d",&num1,&num2);

  a=&num1;
  b=&num2;

  sum=*a+*b;
  printf("sum is  %d ",sum);

  sub=*a-*b;

  printf("Subtraction is %d",sub);

  mul=*a * *b;
  printf("Multilplication  is %d",mul);
 div= *a / *b; 
 printf("Division is %d",div);

}