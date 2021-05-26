#include<stdio.h>
void main()
{
    
     char decode [20]= {'-','{','$','%','0','^','_','&','!','*','>',':','?','+','@','/','1',',','2','=','#','7','"','9','|','1'};

        char name[20];
        char n[20];
        int i=0,j=0,k=0;
       
        printf("enter the String \n");
        scanf("%s",&n);

        while (n[i]!='\0')
        { 
            if(n [i]<= 91)
            {
                j=n[i]-65;
                printf("%c",decode[j]);
            }
            else{

                k=n[i]-97;
                printf("%c",decode[k]);
            }
                i++;
            
        }
        
printf("\n encoding  string  ");
scanf("%s",&n);

while (n[i]!='\0')
        { 
            

                n[i]=n[i]+30;
              
              
                i++;
            
        }
 printf("%s",n);
            
}