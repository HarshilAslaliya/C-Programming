#include <stdio.h>
main()
{
    int a = 5, b = 3, c = 1;

    printf("a = %d\n", a);

    printf("b = %d\n", b);

    printf("c = %d\n", c);

    printf("---------------------------\n");

    printf("(a + b)^2 = %d\n", (a * a) + (b * b) + (2 * a * b));

    printf("(a - b)^2 = %d\n", (a * a) + (b * b) - (2 * a * b));

    printf("(a + b)^3 = %d\n", (a * a * a) + (3 * a * a * b) + (3 * a * b * b) + (b * b * b));

    printf("(a - b)^3 = %d\n", (a * a * a) - (3 * a * a * b) + (3 * a * b * b) - (b * b * b));

    printf("(a + b + c)^2 = %d\n", (a * a) + (b * b) + (c * c) + (2 * a * b) + (2 * b * c) + (2 * c * a));

    printf("(a - b - c)^2 = %d\n", (a * a) + (b * b) + (c * c) - (2 * a * b) + (2 * b * c) - (2 * c * a));

    printf("(a + b + c)^3 = %d\n", (a * a * a) + (b * b * b) + (c * c * c) + (3 * a * a) * (b + c) + (3 * b * b) * (a + c) + (3 * c * c) * (a + b) + (6 * a * b * c));
}