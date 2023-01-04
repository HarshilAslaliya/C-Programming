#include<stdio.h>

main()
{
    int i,j,r,c,sum=0;

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
    printf("-----------Print diagonal of a-----------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j){
                printf("%d ",a[i][r - i - 1]);
            }
        }
        printf("\n");
    }

    printf("------------------Diagonal---------------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j){    
                sum += a[i][r - i - 1];
            } 
        }
    }

    printf("Anti-Diagonal of 2D array = %d\n",sum);
}