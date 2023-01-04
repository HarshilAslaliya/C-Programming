#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int u;
	float a,ta,sur;
	clrscr();

	P("Enter Units = ");
	S("%d",&u);

	if(u<=50)
	{
		a = u * 0.50;
	}
	else if(u<=150)
	{
		a = 25 + (u-50) * 0.75;
	}
	else if(u<=250)
	{
		a = 100 + (u-150) * 1.20;
	}
	else
	{
		a = 220 + (u-250) * 1.50;

	}

	sur = a * 0.20;
	ta = a + sur;

	P("Your electricity bill = %.2f",ta);



	getch();

}