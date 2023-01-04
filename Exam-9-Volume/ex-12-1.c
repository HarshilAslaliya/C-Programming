#include<stdio.h>

struct dis
{
    int feet;
    float inch;
}d1,d2,ans;

void main()
{
    printf("Enter 1st Distance\n");

    printf("Enter feet: ");
    scanf("%d",&d1.feet);
    printf("Enter inch: ");
    scanf("%f",&d1.inch);

    printf("Enter 2nd Distance\n");

    printf("Enter feet: ");
    scanf("%d",&d2.feet);
    printf("Enter inch: ");
    scanf("%f",&d2.inch);

    ans.feet = d1.feet + d2.feet;
    ans.inch = d1.inch + d2.inch;

    while (ans.inch >= 12.0) {
      ans.inch -= 12.0;
      ans.feet++;
   }
   printf("\nSum of distances = %d\'-%.1f\"", ans.feet, ans.inch);
    
}