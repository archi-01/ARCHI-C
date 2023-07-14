#include<stdio.h>

struct Marks {
	
    int roll_no;
    char name[30];
    float chemistry_marks, maths_marks, physics_marks;
    
};

    
void main() {
	FILE *fp;
	fp=fopen("C:\\Users\\r28\\Desktop\\archi.txt","w");
    struct Marks m[5];
    
    int i;
    for(i=0; i<4; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &m[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",m[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%d", &m[i].chemistry_marks);
        printf("Enter Maths marks :\n");
        scanf("%d", &m[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%d", &m[i].physics_marks);
    }
    
    
	for(i=0; i<4; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (m[i].chemistry_marks + m[i].maths_marks + m[i].physics_marks)/300.0*100;
	    printf("Percentage : %d\n", percentage);
	}
   return 0;
  
 fclose(fp);
}
