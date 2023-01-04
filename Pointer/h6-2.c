#include<stdio.h>

main()
{
    int a , b;

    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);

    int *ab , *bc;

    ab = &a;
    bc = &b;

    printf("BEFORE SWAPPING\n");

    printf("A : %d\n",*ab);
    printf("B : %d\n",*bc);


    *ab = *ab + *bc;
    *bc = *ab - *bc;
    *ab = *ab - *bc;

    printf("AFTER SWAPPING\n");

    printf("A : %d\n",*ab);
    printf("B : %d\n",*bc);

}