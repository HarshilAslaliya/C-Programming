#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		
		while(i<=n)
		{
			if(i%2==1)
			{
				printf("Odd Number = %d\n",i);
			}
				i++;
		}
}
