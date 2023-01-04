#include <stdio.h>
#include <string.h>

main()
{
    char a[200];
    int i, len ,count = 0; 
    
    printf("Enter a string:");
    gets(a);
    
    len = strlen(a);

    printf("Length = %d\n",strlen(a));
    
    for(i=0;i < len ;i++)
    {
        if(a[i] != a[len-i-1])
        {
            count = 1;
            
        }
    }
    
    if (count==1)
    {
        printf("%s is not a palindrome", a);
    }    
    else
    {
        printf("%s is a palindrome", a);
    }
    
}