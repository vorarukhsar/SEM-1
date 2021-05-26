#include<stdio.h>
#include<string.h>

int main(){

	char code[26]={'~','{','$','%','`','^','_','&','!','*','>',':','?','+','@','/','1',',','2','=','#','7','"','9','|',']'};
	
	char str[10];
	int pos;
	int i=0,j=0;
	
	printf("enter the value to encode");
	scanf("%s",&str);
	i=0;
	while(str[i] != '\0')
	{
		for(j=0;j<=26;j++)
		{
			if(str[i]==code[j])
			{
				pos=65+j;
				printf("%c",pos);
			}
			
			
		}
		i++;
		
		
	}
	
	
	return 0;
	


}