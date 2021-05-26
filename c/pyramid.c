#include<stdio.h>
void main(){

    int i,j,no,n,k,t=0;

    printf("enter no of rows");
    scanf("%d",&no);

    for (i=1;i<=no;i++)
    {
            for(j=t;j<no;j++)
            {
                printf(" ");
            }
                for(k=0;k<i;k++)
                {
                    printf(" 1 ");

                    t=t+1;
                }
            printf("\n");
    }
}