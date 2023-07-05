#include<stdio.h>

void main(){
	
	int x,y;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	
	printf("Before swapping:\n");
	printf("x:%d\ny:%d\n",x,y);
	
	int *ptr;
	printf("After swapping\n");
	ptr=&y;
	printf("x:%d\n",*ptr);
	ptr=&x;
	printf("y:%d\n",*ptr);
}
