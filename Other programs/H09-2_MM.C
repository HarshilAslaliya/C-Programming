#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a;
	clrscr();
	P("Enter Number = ");
	S("%d",&a);

	(a%2== 0)
		?P("Number is Even....")
		:P("Number is Odd....");

	getch();


}