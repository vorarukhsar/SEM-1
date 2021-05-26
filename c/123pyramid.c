#include<stdio.h>
void main(){

int i,j,k,n;

printf("enter the no of element\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("  ");
    }
        for(k=0;k<i;k++)
        {
            printf("  1 ");
        }
            printf("\n");
}

}