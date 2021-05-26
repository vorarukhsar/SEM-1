#include<stdio.h>
void main()
{
    int num,rem;
    printf("Enter the No:");
    scanf("%d",&num);

    while(num!=0)
    {
        if(num>=1000)
        {
            printf("m");
            num=num-1000;
        }
        
    }
}