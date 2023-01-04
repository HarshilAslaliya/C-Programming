#include<stdio.h>

main()
{
    FILE *fp;

    fp = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\File Handling\\H2.txt","w");

    fprintf(fp,"=================BIO DATA===============\n");
    fprintf(fp,"Name               = Harshil Aslaliya\n");
    fprintf(fp,"Father Name        = Varulbhai Aslaliya\n");
    fprintf(fp,"Father occupation  = Bussinessmen\n");
    fprintf(fp,"Mother Name        = Ritaben Aslaliya\n");
    fprintf(fp,"Village Name       = Bhamariya\n");
    fprintf(fp,"City               = Surat\n");
    fprintf(fp,"Height             = 173cm\n");
    fprintf(fp,"Weight             = 68kg\n");
    fprintf(fp,"Occupation         = Flutter Developper\n");
    fprintf(fp,"Mobile Number      = 9328949821\n");
    fprintf(fp,"Email ID           = harshilasalaliya777@gmail.com\n");
    fprintf(fp,"Hobby              = Play Cricket And Darts\n");
    fprintf(fp,"Religion           = Hindu Patel\n");
    fprintf(fp,"Crrunt Address     = 27,angan row house,surat\n");
    fprintf(fp,"State              = Gujarat\n");
}