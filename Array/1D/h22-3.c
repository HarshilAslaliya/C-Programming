#include<stdio.h>

main()
{
    int n,i,sum=0,avg;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);

        sum += a[i];
    }
    printf("---------------------\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    printf("---------------------\n");
    avg = sum / n;

    printf("Avrage of total value = %d",avg);
}