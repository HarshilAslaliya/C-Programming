#include<stdio.h>
#include<string.h>
main()
{
    int i,len;
    char a[100];

    printf("Enter string = ");
    scanf("%s",&a);

    printf("Size = %d\n\n",strlen(a));
    len = strlen(a);

  
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
            printf("%c",a[i]+32);

        else if(a[i]>=97 && a[i]<=122)
            printf("%c",a[i]-32);
    }

}