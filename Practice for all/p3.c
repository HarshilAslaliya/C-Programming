#include <stdio.h>

main()
{
    int a, b, c;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("Swap\n");

    printf("a = %d\n", a);

    printf("a = %d\n", b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swap\n");
    printf("a = %d\n", a);

    printf("a = %d\n", b);
}