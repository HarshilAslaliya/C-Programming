#include <stdio.h>
#define P printf

main()
{
    int a = 12, b = 13, c = 10, d = 14, e = 9;

    (a > b)
        ? (a > c)
              ? (a > d)
                    ? (a > e)
                          ? P("A is max")
                          : P("E is max")
                : (d > e)
                    ? P("D is max")
                    : P("E is max")
          : (c > d)
              ? (c > e)
                    ? P("C is max")
                    : P("E is max")
          : (d > e)
              ? P("D is max")
              : P("E is max")
    : (b > c)
        ? (b > d)
              ? (b > e)
                    ? P("B is max")
                    : P("E is max")
          : (d > e)
              ? P("D is max")
              : P("E is max")
    : (c > d)
        ? (c > e)
              ? P("C is max")
              : P("E is max")
    : (d > e)
        ? P("D is max")
        : P("E is max");
}