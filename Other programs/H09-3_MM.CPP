#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a,b,c,d;
	clrscr();

	P("A = ");
	S("%d",&a);
	P("B = ");
	S("%d",&b);
	P("C = ");
	S("%d",&c);
	P("D = ");
	S("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				P("A is max");
			}
			else
			{
				P("D is max");
			}
		}
		else
		{
			if(c>d)
			{
				P("C is max");
			}
			else
			{
				P("D is max");
			}

		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				P("B is max");
			}
			else
			{
				P("D is max");
			}
		}
		else
		{
			if(c>d)
			{
				P("C is max");
			}
			else
			{
				P("D is max");
			}
		}
	}

	getch();

}