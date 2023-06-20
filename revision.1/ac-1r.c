#include<stdio.h>

main()
{
	char a;
	printf("enter character: ");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		printf("value: %c",a+32);
	}
	else if(a>=97 && a<=122)
	{
	    printf("value: %c",a-32);
	}
	else if(a>=48 && a<=57)
	{
	    printf("%c is digit !!",a);
	}
	else
	{
	    printf("%c is special character!!",a);
	}
}
