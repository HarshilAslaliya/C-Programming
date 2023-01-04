#include<stdio.h>

main()
{
    int n,i,j,k,tmp;

    printf("Enter size of array = ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("left rotate = ");
    scanf("%d",&k);

    for(i=0;i<k;i++)
    {
        tmp = a[0];
        for(j=0;j<n-1;j++)
        {
            a[j] = a[j+1];
        }
        a[n-1]=tmp;
    }

    printf("After rotate \n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}