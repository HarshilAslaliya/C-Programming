#include<stdio.h>

main()
{
    int n,i,el,pos;

    printf("Enter size of array = ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("-----------Print a----------\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    printf("Enter Position = ");
    scanf("%d",&pos);

    printf("Enter value = ");
    scanf("%d",&el);

    
    for(i = n-1;i>=pos - 1;i--)
    {
        a[i+1] = a[i];

        a[pos-1] = el;
    }
    
    for(i=0;i<=n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    printf("Enter the position = ");
    scanf("%d",&pos);

    for(i=0;i<n-1;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }


}