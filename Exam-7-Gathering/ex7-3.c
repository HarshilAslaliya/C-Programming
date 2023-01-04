#include<stdio.h>
#include<string.h>

char len(char a[])
{
    strlen(a);

    printf("Length = %d",strlen(a));
    
    return 0;
}

void main()
{
    char a[1000];

    printf("Enter string : ");
    gets(a);

    len(a);
}