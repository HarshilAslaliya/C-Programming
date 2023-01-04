#include<stdio.h>

main()
{
    FILE *fp;

    fp = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Exam-10-Supervision\\append.txt","a");

    fprintf(fp,"\nName : Harshil Aslaliya\n");
    fprintf(fp,"Age  : 19\n\n");

}