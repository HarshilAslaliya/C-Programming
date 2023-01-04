#include<stdio.h>

main()
{
	int n,add=0,mul=0,r;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	
	while(n>0)
	{
		add = add + n % 10;
		n = n / 10;
	}
	n=add;
	
	printf("\nSum of digit = %d\n",n);
	
	while(n!=0)
	{
		r = n % 10;
		mul += r;
		n/=10;
	}
	
	
	printf("Mul of digit = %d\n",mul);
	
	if(add==mul)
	{
		
	}
	
	
	
	
	
}
