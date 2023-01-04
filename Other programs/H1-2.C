#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;

	clrscr();

	printf("Enter A = ");
	scanf("%d",&a);

	printf("Enter B = ");
	scanf("%d",&b);

	printf("------------------------\n");

	printf("BEFORE SWAPPING\n");

	printf("A = %d\nB = %d\n",a,b);

	a=a+b;
	b=a-b;
	a=a-b;


	printf("------------------------\n");

	printf("AFTER SWAPPING\n");

	printf("A = %d\nB = %d\n",a,b);



	getch();

}