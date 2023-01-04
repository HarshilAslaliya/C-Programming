#include<stdio.h>

main()
{
    int r,c,i,j;

    printf("Enter number of row = ");
    scanf("%d",&r);
    printf("Enter number of column = ");
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
    printf("-----------------Print------------------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = %d\n",i,j,a[i][j]);
        }
    }


}