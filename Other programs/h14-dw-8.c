#include<stdio.h>

main()
{
	int i=1,sum=0,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		
		do
		{
			
			printf("%d\n",i);
			sum = sum + i;
			i++;
			
		}while(i<=n);
		    
			printf("Sum = %d",sum);
}
