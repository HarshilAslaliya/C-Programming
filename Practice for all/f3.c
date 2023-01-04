#include<stdio.h>

main()
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    int i,j,n,ans=0;

    fp1 = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Practice for all\\even.txt","w");
    fp2 = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Practice for all\\odd.txt","w");
    fp3 = fopen("C:\\Users\\PREMIUM\\Desktop\\C program\\Practice for all\\prime.txt","w");

    printf("Enter No : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            fprintf(fp1,"Even No : %d\n",i);
        }
        else{
            fprintf(fp2,"Odd No : %d\n",i);
        }

    }
    
    fprintf(fp3,"Prime Number\n");
    for(i=1;i<=n;i++)
    {
        ans=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                ans++;
            }
        }
        
        if(ans==0 )
        {
            fprintf(fp3,"%d\n",i);
        }
    }
    
    

}