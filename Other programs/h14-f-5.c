#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	printf("Odd Number\n");
		for(i=0;i<=n;i++)
		{
			if(i%2==1)
			{
				printf("%d\n",i);
			}
		}
}
