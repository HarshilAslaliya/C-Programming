#include<stdio.h>

main()
{
    int a;

    printf("Enter A: ");
    scanf("%d",&a);

    int *ptr;

    ptr = &a;

    printf("%d^2 = %d\n",*ptr,(*ptr) * (*ptr));
}