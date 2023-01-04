#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c,d;

	clrscr();

	P("A = ");
	scanf("%d",&a);
	P("B = ");
	scanf("%d",&b);
	P("C = ");
	scanf("%d",&c);
	P("D = ");
	scanf("%d",&d);


	(a>b)
	     ?(a>c)
		   ?(a>d)
			 ?P("A is max")
			 :P("D is max")
		   :(c>d)
			 ?P("C is max")
			 :P("D is max")
	     :(b>c)
		   ?(b>d)
			 ?P("B is max")
			 :P("D is max")
		   :(c>d)
			 ?P("C is max")
			 :P("D is max");



	getch();
}