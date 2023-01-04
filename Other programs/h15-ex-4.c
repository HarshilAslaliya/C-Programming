#include<stdio.h>

main()
{
	int n,sum,f,l;
	
	printf("Enter number = ");
	scanf("%d",&n);
	
	l = n % 10;
	
	for(sum=0;n>=10;sum++)
	{
		n = n / 10;
	}
	
	f = n;
	
	sum = f + l;
	
	printf("Sum of first and last digit = %d",sum);
}
