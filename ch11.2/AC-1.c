#include<stdio.h>

void main()
{
	
	int i,n;	
	
	printf("Enter the Array: ");
	n=getInt();
	int a[n];
	int *p[n];
	

	for(i=0;i<n;i++){
		p[i]=&a[i];
	}
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",p[i]);
	}
	for(i=0;i<n;i++){
		printf("a[%d]: %d\n",i,*p[n-i-1]);
	}
	
}
int getInt(){
	
	int x;
	scanf("%d",&x);
	return x;
}

    
