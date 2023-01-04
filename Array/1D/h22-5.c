#include<stdio.h>

main()
{
 	int n1, n2, n3, i, j;
 	printf("Enter the number of First Array  :  ");
 	scanf("%d", &n1);     //Array Size Declaration
    int a[n1];      //Array Declaration
 	
 	for(i = 0; i < n1; i++)
  	{
        printf("a[%d] = ",i+1);
      	scanf("%d", &a[i]);
  	}
  	printf("Enter the number of Second Array  :  ");
 	scanf("%d", &n2);    //Array Size Declaration
    int b[n2];       //Array Declaration
 	
 	for(i = 0; i < n2; i++)
  	{
        printf("b[%d] = ",i+1);
      	scanf("%d", &b[i]);
  	}
	n3 = n1 + n2;     //Array Size Declaration
    int c[n3];       //Array Declaration
  	for(i = 0; i < n1; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
  	{
  		c[j] = b[i];
  	}
 	printf("\n a[%d] Array Elements After Merging \n", n3); 
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}
  	
}