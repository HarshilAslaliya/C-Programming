#include<stdio.h>
#include<string.h>

main()
{
    char nm[200];
    int l=0,n=0,s=0,i;

    printf("Enter the password : ");
    gets(nm);

    for(i=0;nm[i]!='\0';i++)
    {
        if(nm[i]>=65 && nm[i]<90 || nm[i]>=97 && nm[i]<=122)
        {
            l++;
        }
        else if(nm[i]>='0' && nm[i]<='9')
        {
            n++;
        }
        else{
            s++;
        }
    }

    // printf("%d Character\n",l);
    // printf("%d Number\n",n);
    // printf("%d Symbol\n",s);

    strlen(nm);
    // printf("length : %d\n",strlen(nm));


    if(strlen(nm)>=6)
    {
        if(l>=1 && n>=1 && s>=1)
        {
            printf("Your password is valid\n");
        }
        else    
        {   
            printf("Something went wrong please try again.....");
        }
    }
    else
    {
        printf("Something went wrong please try again.....");
    }

}