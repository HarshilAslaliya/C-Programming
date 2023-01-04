#include<stdio.h>

main()
{
	int n,fact=1,i;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		for(i=1;i<=n;i++)
		{
			printf("%d  ",i);
			fact = fact * i;
			
			
		}
		printf("\nFactorial = %d\n",fact);
		
}
