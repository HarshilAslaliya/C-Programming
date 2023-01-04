#include<stdio.h>

main()
{
    int i,j,k;

    

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        
            printf("%d",j);
        
                for(k=1;k<=5-i;k++)

                    
                    printf(" ");   
        
                for(j=1;j<=5-i;j++)
        
                    printf("%d",j);
        
        
        printf("\n");
    }
}
