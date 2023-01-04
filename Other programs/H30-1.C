#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;

	clrscr();

	printf("A = ");
	scanf("%d",&a);

	printf("B = ");
	scanf("%d",&b);

	printf("Sum = %d\n",a+b);
	printf("Subs = %d\n",a-b);
	printf("Mul = %d\n",a*b);
	printf("Div = %d\n",a/b);
	printf("Module = %d\n",a%b);

	getch();



}