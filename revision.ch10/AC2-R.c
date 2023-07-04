#include<stdio.h>
int n;
int getInt();
void arrayIntput(int[]);
void arrayDisplay(int[]);
void arrayCRUD(int[]);
void arrayInsert(int[]);
void arrayUpdate(int[]);
void arrayDelete


(int[]);


void main(){
	printf("Enter length of array: ");
	n=getInt();
	
	int a[n];
	
	arrayIntput(a);
	arrayDisplay(a);
	
	arrayCRUD(a);
	 
}
int getInt(){
	int x;
	scanf("%d",&x);
	return x;
}
void arrayIntput(int a[]){
	int i;
	for(i=0;i<n;i++){
		printf("Element a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void arrayDisplay(int a[]){
	int i;
	for(i=0;i<n;i++){
		printf("%d) Element :  %d\n",i+1,a[i]);
		
	}
}

void arrayCRUD(int a[]){
	int choice;
	
	do{
		printf("Enter...\n1) Insert\n2) Update\n3) Delete\n4) Display\n5) EXIT!!\Enter your choice : ");
		choice=getInt();
		system("cls");
		
		switch(choice)
		{
			case 1:
				arrayInsert(a);
				break;
			case 2:
				arrayupdate(a);
				break;
			case 3:
				arrayDelete(a);
				break;
			case 4:
				arrayDisplay(a);
				break;
			case 5:
				break;
			default:
				printf("invalid");
		}
			
	}while(choice!=5);
	
}

void arrayInsert(int a[])
{
	int pos,val,i;
	
	printf("enter position between 0..%d :",n-1);
	pos=getInt();
	printf("enter value :");
	val=getInt();
	
	for(i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=val;
	n++;
}

void arrayupdate(int a[])
{
	int pos,val;
	
	printf("enter position between 0..%d :",n-1);
	pos=getInt();
	printf("enter value :");
	val=getInt();
	

	a[pos]=val;
	
}

void arrayDelete(int a[])
{
	int pos,i;
	
	printf("enter position between 0..%d :",n-1);
	pos=getInt();
	
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}




