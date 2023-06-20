#include<stdio.h>
#include<conio.h>
main()
{
 int choice;
 clrscr();
 printf("enter ...........\n\n");
 printf(" 1 for english\n");
 printf(" 2 for hindi\n");
 printf(" 3 for gujarati\n");
 printf("enter your choice");
 scanf("%d",&choice);

 switch(choice)
 {
     case 1:
	    printf("\nyou have selected recharge \n");

	    printf("enter.....\n");
	    printf("1 for internet recharge\n\n");
	    printf("2 for top-up recharge\n\n");
	    printf("3 for special recharge\n\n");
	    printf("enter your choice\n\n");
	    scanf("%d",&choice);
	    printf("you have ------- successfully done---------- recharge.\n\n");
	    break;
     case 2:
	    printf("\n---you have selacted hindi\n");

	    printf("\n-----enter........\n ");
	    printf(" internet recharge ke liya 1 dabaiye\n ");
	    printf("\ntop up recharge ke liye 2 dabaiye\n ");
	    printf("\nspecial recharge ke liye 3 dabaiye\n");
	    printf("\nenter-------your-------choice");
	    scanf("%d",&choice);
	    printf("\n\naapne safaltapurvak recharge karva------liya he");
	    break;
     case 3:
	     printf("\n---you have selacted gujarati \n");

	    printf("\n-----enter........\n ");
	    printf(" internet recharge mate 1 dabavo\n ");
	    printf("\ntop up recharge mate 2 dabavo\n ");
	    printf("\nspecial recharge mate 3 dabavo\n");
	    printf("\nenter-------your-------choice");
	    scanf("%d",&choice);
	    printf("\n\tema safaltapurvak recharge karavya------chhe.");
	    break;
 }

	 getch();
}