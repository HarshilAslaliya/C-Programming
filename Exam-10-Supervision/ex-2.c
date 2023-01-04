#include<stdio.h>

main()
{
    FILE *fp;
    FILE *f;

    char a[200];

    fp = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Exam-10-Supervision\\h3.txt","r");
    f = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Exam-10-Supervision\\h4.txt","w");

    fgets(a,200,fp);

    fprintf(f,"%s",a);

    printf("Data : %s",a);

    fclose(fp);

}