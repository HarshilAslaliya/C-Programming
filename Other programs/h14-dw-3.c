#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
		do
		{
			printf("Number = %d\n",i);
			i++;
		}while(i<=n);
}
