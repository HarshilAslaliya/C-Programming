#include<stdio.h>
#include<string.h>

void toggle(char a[])
{
    int i;

    for(i=0;a[i];i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i] = a[i] + 32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i] = a[i] - 32;
        }
    }
    
}

void main()
{
    char a[200];
    int i;

    printf("Enter string : ");
    gets(a);

    char *ptr[200];

    for(i=0;a[i]!='\0';i++)
    {
        ptr[i] = &a[i];
    }

    toggle(a);

    printf("Toggle case : %s",*ptr);

    
}