#include<stdio.h>

main()
{
	int n,k;
	printf("Enter n: ");
	scanf("%d",&n);	
	printf("Enter k:"); 
	scanf("%d",&k);
	
	int a[n],b[n],i,c[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		printf("Enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
		printf("array c is :");
		for(i=0;i<n+k;i++)
		{
		
			
		
	if(i<n)
	{
		c[i]=a[i];
	}
	else
	{
		c[i]=b[i-n];
	}
	printf("%d",c[i]);
}
}
