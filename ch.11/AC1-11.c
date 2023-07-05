#include<stdio.h>

void main(){
	
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int i,a[n],square;
	int *ptr;
	
	ptr=a;
	for(i=0;i<n;i++){
		printf("Enter a[%d]: ",i);
		scanf("%d",ptr+i);
	
	}
	
	
    printf("square of element :\n");
    for(i=0;i<n;i++){
    	  
    	printf("%d\n",*(ptr+i)**(ptr+i));
	}
    
}
