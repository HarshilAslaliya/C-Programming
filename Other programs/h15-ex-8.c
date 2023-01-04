#include<stdio.h>

main()
{
	int n,i,f=0,m=0;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=1;
		}
		
	}
	if(f==0)
	{
		printf("Prime number");
	}
	else
	{
		printf("Not prime number");
	}
}
