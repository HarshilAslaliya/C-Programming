#include<stdio.h>

int sum(int a[],int n)
{
    int i,sum=0;

    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
    
    return sum;
}

void main()
{
    int i,n,ans;

    printf("Enter Size of array : ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter element %d = ",i+1);
        scanf("%d",&a[i]);
    }

    ans = sum(a,n);

    printf("Sum of array = %d",ans);


}