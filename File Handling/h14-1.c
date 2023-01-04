#include<stdio.h>

main()
{
    FILE *fp;
    FILE *f1;
    int a;
    char s[200];

    fp = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\File Handling\\file1.txt","r");

    f1 = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\File Handling\\file2.txt","a");


    fscanf(fp,"%s",&s);

    fprintf(f1,"Value is : %s\n",s);

    fclose(fp);
    fclose(f1);
    
  
}