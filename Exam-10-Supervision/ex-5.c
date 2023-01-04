#include<stdio.h>

main()
{
    FILE *fp;
    FILE *f;
    char a[200];

    fp = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Exam-10-Supervision\\h2.txt","r");
    f = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Exam-10-Supervision\\h1.txt","a");

    fgets(a,200,fp);

    
    fprintf(f,"%s",a);

    fclose(fp);

    
}