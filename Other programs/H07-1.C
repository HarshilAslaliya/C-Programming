#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b;

	clrscr();

	P("A = ");
	scanf("%d",&a);

	P("B = ");
	scanf("%d",&b);

	(a>b)
	     ?P("A is max")
	     :P("B is max");

	getch();

}