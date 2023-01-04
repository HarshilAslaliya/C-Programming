#include<stdio.h>

main()
{
    FILE *fp;
    FILE *f;
    char a[200];

    fp = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Practice for all\\h1.txt","r");
    f = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Practice for all\\h2.txt","a");

    fgets(a,200,fp);

    
    fprintf(f,"%s",a);

    fclose(fp);

    
}