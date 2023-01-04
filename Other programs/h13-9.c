#include<stdio.h>

main()
{
	int n,fact=1,i;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		while(i<=n)
		{
			printf("%d *",i);
			fact = fact * i;
			i++;
			
			
		}
		printf("\nFactorial = %d\n",fact);
		
}
