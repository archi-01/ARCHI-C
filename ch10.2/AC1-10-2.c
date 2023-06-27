#include<stdio.h>

void arrInput(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
int arrsum(int a[],int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum += a[i];		
	}
	return sum;
}
int main(){
	int n,sum,i,a[n];
	printf("Enter array size: ");
	scanf("%d",&n);
	arrInput(a,n);
	sum = arrsum(a,n);
	printf("The sum of array: %d",sum);
}


