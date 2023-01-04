#include<stdio.h>

main()
{
    int n,i;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n],*ptr[n];

    for(i=0;i<n;i++)
    {
        ptr[i] = &a[i];
    }

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] = ",i);
        scanf("%d",&*ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,*ptr[i]);
    }

}