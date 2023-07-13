#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	int i,a;

	fp2=fopen("C:\\Users\\r28\\Desktop\\Archi-1.txt","r");
	
	fscanf(fp2,"%d",&a);
	
	fclose(fp2);
	printf("data from file : %d",a);
	fp1=fopen("C:\\Users\\r28\\Desktop\\Archi-2.txt","w");
	fprintf(fp1,"%d",a);
	
}
   
