#include<stdio.h>

main()
{
	int n,k,i;
	printf("Enter n: ");
	scanf("%d",&n);	
	printf("Enter k:"); 
	scanf("%d",&k);
	printf("The array is :");
	for(i=n;i<=k;i++)
	{
		if(i%4==0)
		{
			printf("%d",i);
		}
	}
}
	
