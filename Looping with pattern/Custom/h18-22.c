#include<stdio.h>

main()
{
    int i,j,k;

    for(i=1;i<=7;i++)
    {
        if(i==2 || i==3 || i==4)
                printf("*     *\n");
        else if(i==1)
                printf(" * * * \n");
        else if(i==5)
                printf("*  *  *\n");
        else if(i==7)
                printf(" * *   *\n");
        else        
                printf("*    *\n");
        
    }
}