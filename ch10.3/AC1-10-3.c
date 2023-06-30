#include<stdio.h>

int fac(int n)
{
	if(n!=1)
	{
	return n*fac(n-1);
}
    else{
    	return 1;
	}
}
void main()
 {
 	int n,r;
 	printf("enter the value : ");
 	scanf("%d",&n);
 	r=fac(n);
	printf("factorial: %d",r);
	  }
