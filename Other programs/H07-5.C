#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c;

	clrscr();

	P("A = ");
	scanf("%d",&a);
	P("B = ");
	scanf("%d",&b);
	P("C = ");
	scanf("%d",&c);

	(a>b)
	     ?(a>c)
		   ?P("A is max")
		   :P("C is max")
	     :(b>c)
		   ?P("B is max")
		   :P("C is max");

	getch();
}