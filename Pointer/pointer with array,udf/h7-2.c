#include<stdio.h>

int table(int a , int *ptr)
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("%d  %d  %d\n",a,i,a*i);
    }


}

void main()
{
    int a,i;

    printf("Enter Table : ");
    scanf("%d",&a);
    
    int *ptr;

    ptr = &a;

    table(a,*ptr);


}