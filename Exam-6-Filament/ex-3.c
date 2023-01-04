#include<stdio.h>
#include<string.h>
main()
{
    char a[100],c;
    int i,j,len;
     
    printf("enter the string : ");
    gets(a);

        len = strlen(a);
    
    for(i=0; i<len; i++)
    {
        if(a[i] == ' ')
        {
            for(j=i; j<len; j++)
            {
                a[j] = a[j+1];
            }
            len--;
            i--;
        }
    }
     printf("After removing space: %s", a);
 }