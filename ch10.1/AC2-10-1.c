#include<stdio.h>

void sum(){
	
	int a;
	printf("Enter a :");
	scanf("%d",&a);
    
    if(a%3==0 && a%5==0)
    {
    	printf("The Given Number Is Divisible By 3&5");
	}
	else
	 	printf("The Given Number Not Divisible By 3&5");
}
void main(){
	sum();
}	
