#include<stdio.h>

void main()
{
	
	int i;
	FILE *fp1,*fp2;
	
	fp1=fopen("C:\\Users\\r28\\Desktop\\even.txt","w");
	fp2=fopen("C:\\Users\\r28\\Desktop\\odd.txt","w");
	
	
	for(i=50;i<=70;i++){
		
	    if(i%2==0){
	    	
	    	fprintf(fp1,"%d\n",i);
		}	
		else{
			fprintf(fp2,"%d\n",i);
		}
	}
	fclose(fp1);
	fclose(fp2);
}

 
