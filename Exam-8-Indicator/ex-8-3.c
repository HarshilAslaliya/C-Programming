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

    printf("Reverse array \n");

    for(i=n-1;i>=0;i--)
    {
        printf("a[%d] = %d\n",i,*ptr[i]);
    }


}