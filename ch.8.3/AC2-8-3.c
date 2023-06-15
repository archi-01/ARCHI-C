#include<stdio.h>

main()
{
	int r,c;
	printf("Enter row: ");
	scanf("%d",&r);
	printf("Enter column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0,ave;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	ave=sum/(r*c);
	printf("%d",ave);
	
	
}
