#include<stdio.h>

main()
{
    int i,n,j=0;

    printf("Enter the array of number = ");
    scanf("%d",&n);

    int a[n];
    printf("---------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("---------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
        j++;
    }
    printf("---------------------------\n");

    printf("Length of array = %d",j);
}