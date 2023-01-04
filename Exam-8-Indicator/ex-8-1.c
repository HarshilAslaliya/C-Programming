#include<stdio.h>

main()
{
    int a,b;

    printf("A : ");
    scanf("%d",&a);
    
    printf("B : ");
    scanf("%d",&b);

    int *ab,*bc;

    ab = &a;
    bc = &b;

    *ab = *ab + *bc;
    *bc = *ab - *bc;
    *ab = *ab - *bc;

    printf("After Swapping \n");

    printf("A : %d\n",*ab);
    printf("B : %d\n",*bc);

}