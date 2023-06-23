#include <stdio.h>

 
main()
{
  	char str[20];
  	int i, len, count=0;
  
 
  	printf(" Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	 	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			count= 1;
			break;	
		} 
	}
	if(count == 0)
	{
		printf("%s is a Palindrome String", str);
	}
	else
	{
		printf(" %s is Not a Palindrome String", str);
	}	
	
  	return 0;
}
