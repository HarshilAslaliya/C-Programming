#include<stdio.h>

main()
{
    int r,c,i,j;

    printf("Enter number of row = ");
    scanf("%d",&r);
    printf("Enter number of column = ");
    scanf("%d",&c);

    int a[r][c],b[r][c],sum[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("--------------------------------------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("----------------Print A-----------------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = %d\n",i,j,a[i][j]);
            
        }
    }
    printf("----------------Print B-----------------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("b[%d][%d] = %d\n",i,j,b[i][j]);
        }
    }
    printf("----------------Sum of a and b----------------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] + b[%d][%d] = %d\n",i,j,i,j,sum[i][j]);
        }
    }

}