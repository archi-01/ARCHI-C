#include<stdio.h>
#include<conio.h>

main()
{

      int l,h;
      float half=0.5;
      clrscr();

      printf("enter length of triangle : ");
      scanf("%d",&l);
      printf("enter heigth of triangle : ");
      scanf("%d",&h);

      printf("area of triangle :%.2f",l*h*0.5);

      getch();

}