#include<stdio.h>

main()
{
    int r,c,i,j;

    printf("Enter row = ");
    scanf("%d",&r);

    printf("Enter column = ");
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
    printf("===============================\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("================A===============\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("================B===============\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    printf("==============Sum===============\n");

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
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
   

    

}