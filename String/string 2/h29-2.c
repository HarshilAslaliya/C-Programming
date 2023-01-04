#include<stdio.h>
#include<string.h>
main()
{
    char em[200],ps[200],fs,ad;
    int i,a=0,c=0,k=0,upr=0,lwr=0;

    

    printf("Enter Email address : ");
    gets(em);

    printf("Enter Password : ");
    gets(ps);

    strlen(em);
    puts(em);
    printf("Length : %d\n",strlen(em));

    for(i=0;em[i]!='\0';i++)
    {
        if(em[i] == '.')
        {
            a++;
        }
        else if(em[i] == '@')
        {
            c++;
        }
        else if(em[i]>=97 && em[i]<=122)
        {
            k++;
        }
    }

    if(a==1 && c==1 && k==1)
    {
        printf("Email is valid...");
    }
    else{
        printf("Email is not valid...");
    }

}