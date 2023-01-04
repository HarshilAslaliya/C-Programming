#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		i=n;
		while(i>=1)
		{
			if(i%2==0)
			{
				printf("Even Number = %d\n",i);
			}
				i--;
		}
}
