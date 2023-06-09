#include<stdio.h>
#include<conio.h>


main()
{
	int a,b,c,d,max;
	clrscr();

	printf("Enter a,b,c and d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	max=(a>b)
		 ?(a>c)
			 ?(a>d)
				?a
				:d
			 :(c>d)
				?c
				:d
		 :(b>c)
			 ?(b>d)
				?b
				:d
			 :(c>d)
				?c
				:d;

	printf("Greater value :%d\n\n",max);

	(a>b)
	       ?(a>c)
		      ?(a>d)
			     ?printf("a is max")
			     :printf("d is max")
		      :(c>d)
			     ?printf("c is max")
			     :printf("d is max")
	       :(b>c)
		      ?(b>d)
			     ?printf("b is max")
			     :printf("d is max")
		      :(c>d)
			     ?printf("c is max")
			     :printf("d is max");

	getch();
}
