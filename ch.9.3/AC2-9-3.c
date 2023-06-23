#include<stdio.h>

main()
{
	char a[20];
	int i,count=1,j;
	printf("enter string :");
	scanf("%[^\n]",&a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		for(j=i+1;a[j]!=NULL;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}	
		printf("%c => %d\n",a[i],count);
		count = 1;
	}
	
}
