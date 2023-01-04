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

	if(a<b)
	{
		if(a<c)
		{
			P("A is small");
		}
		else
		{
			P("C is small");
		}
	}
	else
	{
		if(b<c)
		{
			P("B is small");
		}
		else
		{
			P("C is small");
		}

	}


	getch();
}