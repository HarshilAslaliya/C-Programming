#include<stdio.h>

void div()
{
    int num;

    printf("Enter the Number : ");
    scanf("%d",&num);

    
    if(num % 3 == 0)
    {
        printf("%d is divisible by 3 & 5.\n",num);
    }
    else if(num % 5 == 0)
    {
        printf("%d is divisible by 3 & 5.\n",num);
    }
    else 
    {
        printf("Not divisible by 3 & 5\n");
    }
        
}

void main()
{
    div();

    div();

}

