#include<stdio.h>

struct employees {
	int id;
	char name[20];
	int age;
	char role[20];
	char city [10];
	int experience;
	char companyname[30];
};

void main(){
 	int i,n;
 	
 	printf("Enter total employees:\t");
 	scanf("%d",&n);
	struct employees s[n];
	
	for(i=0;i<3;i++){
		printf("Employees: (%d/%d)\n",i+1,n);
	    printf("Enter Id\t: ");
		scanf("%d",&s[i].id);
		printf("Enter Name\t: ");
		scanf("%s",&s[i].name);
		printf("Enter Age\t: ");
		scanf("%d",&s[i].age);
		printf("Enter Role\t:");
		scanf("%s",&s[i].role);
		printf("Enter City\t: ");
		scanf("%s",&s[i].city);
		printf("Enter Experience: ");
		scanf("%d",&s[i].experience);
		printf("Enter Company Name: ");
		scanf("%s",&s[i].companyname);
	}
	printf("Id\tName\tAge\tRole\tCity\tExperience\tCompany name\n\n");
	for(i=0;i<n;i++){
		
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].experience,s[i].companyname);
	}
}
