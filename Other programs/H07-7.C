#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c,d,e;

	clrscr();

	P("A = ");
	scanf("%d",&a);
	P("B = ");
	scanf("%d",&b);
	P("C = ");
	scanf("%d",&c);
	P("D = ");
	scanf("%d",&d);
	P("E = ");
	scanf("%d",&e);

	(a>b)
		?(a>c)
			?(a>d)
				?(a>e)
				      ?P("A is max")
				      :P("E is max")
				:(d>e)
				      ?P("D is max")
				      :P("E is max")
			:(c>d)
				?(c>e)
				      ?P("C is max")
				      :P("E is max")
				:(d>e)
				      ?P("D is max")
				      :P("E is max")
		:(b>c)
			?(b>d)
				?(b>e)
				      ?P("B is max")
				      :P("E is max")
				:(d>e)
				      ?P("D is max")
				      :P("E is max")
			:(c>d)
				?(c>e)
				      ?P("C is max")
				      :P("E is max")
				:(d>e)
				      ?P("D is max")
				      :P("E is max");




	getch();
}