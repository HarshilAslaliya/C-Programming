#include<stdio.h>

main()
{
	int i,sum=0,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		
		for(i=1;i<=n;i++)
		{
			
			printf("%d\n",i);
			sum = sum + i;
			
			
		}
		    
			printf("Sum = %d",sum);
}
