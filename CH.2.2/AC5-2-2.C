#include<stdio.h>
#include<conio.h>

main()
{

      int r;
      float pi=3.14;
      clrscr();

      printf("enter radius : ");
      scanf("%d",&r);


      printf("circumference of circle:%.2f",r*pi*2);

      getch();

}