#include<stdio.h>

main()
{
    FILE *fp;
    FILE *f;

    char a[200];

    fp = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Practice for all\\h3.txt","r");
    f = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Practice for all\\h4.txt","a");

    fscanf(fp,"%s",&a);

    fprintf(f,"%s",a);

    printf("Data : %s",a);

    fclose(fp);

}