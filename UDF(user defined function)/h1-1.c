#include<stdio.h>

void cube()
{
    int c,ans;

    printf("Enter the number of cube : ");
    scanf("%d",&c);

    ans = c * c * c;

    printf("%d^3 = %d\n",c,ans);

}

void main()
{
    cube();
}