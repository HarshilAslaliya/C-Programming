#include<stdio.h>

void add()
{
    int a,b;

    printf("A = ");
    scanf("%d",&a);

    printf("B = ");
    scanf("%d",&b);


    printf("\n%d + %d = %d\n\n",a,b,a+b);

}

void sub()
{
    int a,b;

    printf("A = ");
    scanf("%d",&a);

    printf("B = ");
    scanf("%d",&b);


    printf("\n%d - %d = %d\n\n",a,b,a-b);

}

void mul()
{
    int a,b;

    printf("A = ");
    scanf("%d",&a);

    printf("B = ");
    scanf("%d",&b);


    printf("\n%d * %d = %d\n\n",a,b,a*b);

}

void div()
{
    int a,b;

    printf("A = ");
    scanf("%d",&a);

    printf("B = ");
    scanf("%d",&b);


    printf("\n%d / %d = %d\n\n",a,b,a/b);

}

void mod()
{
    int a,b;

    printf("A = ");
    scanf("%d",&a);

    printf("B = ");
    scanf("%d",&b);


    printf("\nModule = %d\n\n",a % b);

}

void cal()
{
    int ch;

    do
    {
        printf("Press 1 for Addition.\n");
        printf("Press 2 for Substraction.\n");
        printf("Press 3 for Multiplication.\n");
        printf("Press 4 for Division.\n");
        printf("Press 5 for Module.\n");
        printf("Press 6 for Exit.\n");

        printf("Enter your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                mod();
                break;
        }

    }while(ch!=6);
}

void main()
{
    cal();
}