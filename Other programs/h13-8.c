#include<stdio.h>

main()
{
	int i=1,sum=0,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		
		while(i<=n)
		{
			
			printf("%d\n",i);
			sum = sum + i;
			i++;
			
			
		}
		    
			printf("Sum = %d",sum);
}
