#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a;

	clrscr();

	P("Select 1 for January");
	P("Select 2 for February");
	P("Select 3 for March");
	P("Select 4 for April");
	P("Select 5 for May");
	P("Select 6 for June");
	P("Select 7 for July");
	P("Select 8 for August");
	P("Select 9 for September");
	P("Select 10 for Octember");
	P("Select 11 for November");
	P("Select 12 for December");

	P("Enter your choice = ");
	S("%d",&a);

	switch(a)
	{
		case 1:
			P("January");
			break;
		case 2:
			P("February");
			break;
		case 3:
			P("March");
			break;
		case 4:
			P("April");
			break;
		case 5:
			P("May");
			break;
		case 6:
			P("June");
			break;
		case 7:
			P("July");
			break;
		case 8:
			P("Agust");
			break;
		case 9:
			P("September");
			break;
		case 10:
			P("Octomber");
			break;
		case 11:
			P("November");
			break;
		case 12:
			P("December");
			break;
		default:
			P("Invalid Choice");
			break;



	}




	getch();
}