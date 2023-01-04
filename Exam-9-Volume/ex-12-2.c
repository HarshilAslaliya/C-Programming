#include<stdio.h>

union marks
{
    int id;
    char nm[200];
    int chem;
    int math;
    int phy;
    int sum;
    float per;
}m;

void main()
{
    int i;
    

    for(i=0;i<5;i++)
    {
        printf("Students (%d)\n",i+1);

        printf("Enter roll no = ");
        scanf("%d",&m.id);
        printf("Enter Name = ");
        scanf("%s",&m.nm);
        printf("Enter Chemestry Marks= ");
        scanf("%d",&m.chem);
        printf("Enter Maths Marks= ");
        scanf("%d",&m.math);
        printf("Enter Physics Marks= ");
        scanf("%d",&m.phy);

        m.sum = m.chem + m.math + m.phy;
        m.per = m.sum/3;

        printf("Percentage : %.2f\n",m.per);

    }

    
    
}