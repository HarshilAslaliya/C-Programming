#include<stdio.h>
#include<conio.h>
main()
{
	int sal,hra=10,da=5,ta=8,ans;

	clrscr();

	printf("Enter Salary = ");
	scanf("%d",&sal);

	ans = sal+hra+da+ta;

	printf("-----------------------\n");

	printf("Gross Salary = %d\n",ans);


	getch();

}