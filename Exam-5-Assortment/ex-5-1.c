#include<stdio.h>

main()
{
    int n,i;
    
    printf("Enter size of array = ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("|-----------Print a-----------|\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    printf("|-------------Negative Number-------------|\n");
    
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d\n",a[i]);
        }
    }


}
