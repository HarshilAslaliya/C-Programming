#include<stdio.h>

main()
{
	int i=0,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	printf("Odd Number\n");
		do
		{
			if(i%2==1)
			{
				printf("%d\n",i);
			}
			i++;
			
		}while(i<=n);
}
