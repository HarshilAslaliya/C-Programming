#include<stdio.h>

main()
{
    int i,n,lrg,lrg2;

    printf("Enter size of array = ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("------------Print------------\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>lrg)
        {
            lrg2 = lrg;
            lrg = a[i];
        }
        else if(a[i]>lrg2 && a[i]<lrg)
        {
            lrg2 = a[i];
        }
    }
    printf("=========Second Largest Number=========\n");
    printf("The second largest number = %d\n",lrg2);

}