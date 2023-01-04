#include<stdio.h>

main()
{
	int i=2000;
	
	printf("Leap Year:-\n");
	
	do
	{
		printf("%d\t",i);
		i=i+4;
	}while(i<=3000);
}
