#include<stdio.h>

main()
{
	int a,n,i,rev=0;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	a=n;	
	while(n!=0)
	{
		i = n % 10;
		rev = rev * 10 + i;
		n = n / 10;
	}
	
	if(a==rev)
	{
		printf("This number is Palindrome Number");	
	}
	else
	{
		printf("This number is not Palindrome Number");
	}
	
} 
