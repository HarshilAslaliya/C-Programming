#include<stdio.h>

main()
{
	int n,fact=1;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	while(n>=1)
	{
		fact = fact * n;
		n--;
	}
	printf("Factorial = %d",fact);
}
