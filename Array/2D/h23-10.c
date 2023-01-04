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
    printf("-----------Print boundry of a-----------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || j==0 || i == c-1 || j == c-1){
                printf("%d ",a[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("------------------Sum of boundry---------------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || j==0 || i == c-1 || j == c-1){    
                sum += a[i][j];
            } 
        }
    }

    printf("Sum of boundry 2D array = %d\n",sum);
}