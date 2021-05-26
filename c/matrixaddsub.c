#include<stdio.h>
void main()
{
int r,c,i,j,a[100][100],b[100][100],sum[100][100];

printf("Enter No of Row");
scanf("%d",&r);
printf("Enter no of Coloum");
scanf("%d",&c);

printf("Enter Element of First Matrix :\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    printf("enter element %d %d",i+1,j+1);
    scanf("%d",&a[i][j]);

printf("Enter Element of sECOND Matrix :\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    printf("enter element %d %d",i+1,j+1);
    scanf("%d",&a[i][j]);

for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
    sum[i][j]=a[i][j]+b[i][j];
}

printf("Sum of two Matrix is : \n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
    printf("%d",sum[i][j]);
    if(j==c-1)
    {
        printf("\n");
    }
}
return 0;
}