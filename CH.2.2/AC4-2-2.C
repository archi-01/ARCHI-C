#include<stdio.h>
#include<conio.h>

main()
{

      int p,r,t;
      clrscr();

      printf("enter principal : ");
      scanf("%d",&p);
      printf("enter rate : ");
      scanf("%d",&r);
      printf("enter time : ");
      scanf("%d",&t);

      printf("simple interest is :%d",p,r,t/100);

      getch();

}