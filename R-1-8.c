#include<stdio.h>

main()
{
	int n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n],i,pos,val,choice;
	
	for(i=0;i<n;i++)
	{
	printf("Enter a[%d]: ",i);
	scanf("%d",&a[i]);
    }
	do{
		printf("Enter...\n1) insert\n2) update\n3) delete\n4) display\n5) EXIT !!\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1:
				printf("Enter position\t: ");
	            scanf("%d",&pos);
				printf("Enter value\t: ");
	            scanf("%d",&val);
	            
	            for(i=n-1;i>pos;i--){
	            	a[i+1]=a[i];
				}
				
				a[pos]=val;
				n++;
				break;
				
			case 2:
				printf("Enter position\t: ");
	            scanf("%d",&pos);
				printf("Enter value\t: ");
	            scanf("%d",&val);
	            
				a[pos]=val;	
				break;	
				
			case 3:
				printf("Enter position\t: ");
	            scanf("%d",&pos);
				printf("Enter value\t: ");
	            scanf("%d",&val);
	            
	            for(i=pos;i>n;i++){
	            	a[i]=a[i+1];
				}
				
				n--;
				break;
				
			case 4:
				printf("Array element :");
	          
	            for(i=0;i<n;i++){
				    printf("%d",a[i]);
	           	}
	           	printf("\n");
				break;	
			case 5:
			    break;
			default:
				printf("Invalid choice !! \n");
				break;
			}
		}
while(choice !=5);
}
