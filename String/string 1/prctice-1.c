#include<stdio.h>
#include<string.h>
main()
{
    int i,j,n,len;
    char a[100],ans;

    printf("Enter string =");
    scanf("%s",&a);

    printf("Size = %d\n\n",strlen(a));
    len = strlen(a);

    n=strlen(a);

    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                ans = a[i];
                a[i] = a[j];
                a[j] = ans;
            }
        }
        
    }

    for(i=0;i<n+1;i++)
    {
        printf("%c\t",a[i]);
    }


}