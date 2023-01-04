#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define p printf
main()
{
	float area,r=10;

	clrscr();

	area = PI * r * r;

	p("Area of circle = %f",area);

	getch();

}