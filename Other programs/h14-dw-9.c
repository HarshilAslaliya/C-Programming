#include<stdio.h>

main()
{
	int n,fact=1,i=1;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		do
		{
			printf("%d  ",i);
			fact = fact * i;
			i++;
			
		}while(i<=n);
		printf("\nFactorial = %d\n",fact);
		
}
