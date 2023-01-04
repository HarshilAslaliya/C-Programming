#include<stdio.h>

main()
{
    int i,j,r,c,sum;

    printf("Enter the number of row = ");
    scanf("%d",&r);
    
    printf("Enter the number of column = ");
    scanf("%d",&c);

    int a[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("-----------Print matrix of a-----------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }


}