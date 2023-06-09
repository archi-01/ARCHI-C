#include<stdio.h>
#include<conio.h>
main()
{
 float f;
 int c;
 clrscr();
 printf("the temperature in celcius :");
 scanf("%d",&c);
 f = (c*(9/5))+32;
 printf("the temperature in fahreheit :%.2f",f);
 getch();
}