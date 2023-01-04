#include <stdio.h>

main()
{
    int n, i;

    printf("Enter array of number = ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];
    int *p1[n], *p2[n], *p[n];

    for (i = 0; i < n; i++)
    {
        p1[i] = &a[i];
    }
    for (i = 0; i < n; i++)
    {
        p2[i] = &b[i];
    }
    for (i = 0; i < n; i++)
    {
        p[i] = &sum[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%d", &*p1[i]);
    }

    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        printf("b[%d] = ", i + 1);
        scanf("%d", &*p2[i]);
    }

    for (i = 0; i < n; i++)
    {
        *p[i] = *p1[i] + *p2[i];
    }

    printf("----------------a----------------\n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, *p1[i]);
    }

    printf("----------------b-----------------\n");

    for (i = 0; i < n; i++)
    {
        printf("b[%d] = %d\n", i, *p2[i]);
    }

    printf("--------------Sum----------------\n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d] + b[%d] = %d\n", i, i, *p[i]);
    }
}