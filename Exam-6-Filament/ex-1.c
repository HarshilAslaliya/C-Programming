#include<stdio.h>
#include <string.h>
 
main()
{
    char s[1000];  
    int i,j,count=0,fre[1000];
 
    printf("Enter  the string : ");
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        count = 1;
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                count++;
                fre[j] = 0;
            }
        }

        if(fre[i] != 0)
        {
            fre[i] = count;
        }
    }

    for(i=0;s[i]!='\0';i++)
    {
        if(fre[i] != 0)
        {
            printf("'%c' is %d times\n",s[i],fre[i]);
        }
    }
    
    
 
}