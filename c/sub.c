#include<stdio.h>

int main(){
	
	int i,j,m,n,flag,k,l;
	
	char str1[100];
	char str2[100];
	
	printf("Enter the first string:");
	scanf("%s",&str1);

	printf("Enter the second string:");
	scanf("%s",&str2);
	
	m=0; i=0;
	
	n=0;
	j=0;
	
	while(str1[n] !='\0')
	{
		n++;
	}

	while(str2[m] !='\0')
	{
		m++;
	}

	 for (i = 0; i <= n - m; i++)
	    {
		for (j = i; j < i + m; j++)
		{
			
		    flag = 1;
		    if (str1[j] != str2[j - i])
		    {
		        flag = 0;
		        break;
		    }
        	}
        	if (flag == 1)
				
           	 break;
    		}
    		
    		if (flag == 1)
    		{
				
        		printf("It's a Substring ! And Indexes Are:");
        		k=i;
        		l=0;
        		while(str2[l] != '\0')
        		{
        			printf("%d",k);
        			l++;
        			k++;
        		}
		}	
    		else{
        		printf("It's not a substring!!");
			
				
			}
			
	
	
	
}
