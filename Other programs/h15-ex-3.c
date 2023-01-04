#include<stdio.h>

main()
{
	int n,c;
	
	printf("Enter number = ");
	scanf("%d",&n);
	
	for(c=0;n!=0;c++)
	{
		n=n/10;
	}
	
	printf("Number of digit = %d",c);
}
