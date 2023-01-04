#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	i=n;
		
		do
		{
			printf("Number = %d\n",i);
			i--;
		}while(i>=1);
}
