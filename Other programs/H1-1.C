#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	printf("Enter A = ");
	scanf("%d",&a);

	printf("Enter B = ");
	scanf("%d",&b);

	printf("------------------------\n");

	printf("BEFORE SWAPPING\n");

	printf("A = %d\nB = %d\n",a,b);

	c=a;
	a=b;
	b=c;

	printf("------------------------\n");

	printf("AFTER SWAPPING\n");

	printf("A = %d\nB = %d\n",a,b);



	getch();

}