#include<stdio.h>

struct student {
	int id;
	char name[20];
	int age;
	char course[20];
	char city [10];
	int standard;
	char school[30];
};

void main(){
 	int i;
	struct student s[3];
	
	for(i=0;i<3;i++){
		printf("Student: (%d/%d)\n",i+1,3);
	
		printf("Enter Id\t: ");
		scanf("%d",&s[i].id);
		printf("Enter Name\t: ");
		scanf("%s",&s[i].name);
		printf("Enter Age\t: ");
		scanf("%d",&s[i].age);
		printf("Enter Course\t:");
		scanf("%s",&s[i].course);
		printf("Enter City\t: ");
		scanf("%s",&s[i].city);
		printf("Enter Standard\t: ");
		scanf("%d",&s[i].standard);
		printf("Enter School\t: ");
		scanf("%s",&s[i].school);
	}
	printf("Id\tName\tAge\tCourse\tCity\tStandard\tSchool\n\n");
	for(i=0;i<3;i++){
		
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard,s[i].school);
	}
}
