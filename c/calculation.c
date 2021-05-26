#include<stdio.h>
void main()
{
    int no,noc,nob,nocom;
    printf("Enter String");
    scanf("%s",&no);

    while(no!='s')
    {
    if(no==',')
    { 
         nocom++;
         //break;      
    }    
    else if(no=='\n')
    nob++;
    }
    printf("no of comma is %d",nocom);

}