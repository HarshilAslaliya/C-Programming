#include<stdio.h>

main()
{
    int n,i,j,count;

    printf("Enter size of array = ");
    scanf("%d",&n);

    int a[n],freq[n];
    
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("-----------Print a------------\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    printf("--------Frequency Print---------\n");

    for(i=0;i<n;i++)
    {
        count = 1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

   
    for(i=0;i<n;i++)
    {
        if(freq[i] != 0)
        {
            printf("%d is %d times\n",a[i],freq[i]);
        }
    }


}