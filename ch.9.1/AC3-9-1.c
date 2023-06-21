#include<stdio.h>

main()
{
	char a[20];
	
	printf("enter string :");
	scanf("%[^\n]",&a);
	
	int i;
	
	for(i=0;i<20;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]+=32;		
		}
	    else if(a[i]>=97 && a[i]<=122)
		{
			a[i]-=32;
    	}
	}
	printf("Toggle case :%s\n",a);
}
