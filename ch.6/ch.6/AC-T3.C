#include<stdio.h>
#include<conio.h>

main()
{
	int n, fd,ld,sum=0;
	clrscr();

	printf("enter any number :");
	sacnf("%d",&n);

	fd=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	ld=n;
	sum=fd+ld;
	printf("sum= %d",sum);

	getch();
}