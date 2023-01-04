#include<stdio.h>
#include<string.h>
main()
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

    
    printf("Length = %d\n",strlen(*ptr));
    



}