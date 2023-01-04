#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	printf("Even Number\n");
	i=n;
		do
		{
			if(i%2==0)
			{
				printf("%d\n",i);
			}
			i--;
			
		}while(i>=1);
}
