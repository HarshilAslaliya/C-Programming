#include<stdio.h>

main()
{
    int n,i;

    printf("Enter array of number = ");
    scanf("%d",&n);

    int a[n],b[n],sum[n];

    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n\n");


    for(i=0;i<n;i++)
    {
        printf("b[%d] = ",i+1);
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        sum[i] = a[i] + b[i];
    }

    printf("----------------a----------------\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

   printf("----------------b-----------------\n");

    for(i=0;i<n;i++)
    {
        printf("b[%d] = %d\n",i,b[i]);
    }

    printf("--------------Sum----------------\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d] + b[%d] = %d\n",i,i,sum[i]);
    }

}





