#include<stdio.h>
#include<string.h>

main()
{
    char a[5][100];
    int i,j,count=0;

    for(i=0;i<5;i++)
    {
        printf("Name %d =  ",i+1);
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
           count++;
        }
    }

    printf("total character : %d",count);

    
}