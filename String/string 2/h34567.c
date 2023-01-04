#include<stdio.h>
#include<string.h>
main()
{
    char h[200],fs;

    printf("Enter email address : ");
    gets(h);
    puts(h);

    strlen(h);
    printf("Length : %d\n",strlen(h));

    fs = '.';

    if(strchr(strlen(h)-3,'.'))
    {
        printf("Email is valid....");

    }
    else if(strchr(fs - 3,'@'))
    {
        printf("Email is valid....");
    }
    else{
        printf("Email is not valid...");
    }
}