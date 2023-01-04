#include<stdio.h>

struct emp
{
    int id;
    int age;
    int exp;
    char nm[200];
    char role[200];
    char city[200];
    char company_nm[200];
};

void main()
{
    int n,i;

    printf("Enter Number of students : ");
    scanf("%d",&n);

    struct emp s1[n];

    for(i=0;i<n;i++)
    {
        system("cls");

        printf("Student(%d/%d)\n--------------\n",i+1,n);

        printf("Enter Employee ID: ");
        scanf("%d",&s1[i].id);
        printf("Enter Employee Name: ");
        scanf("%s",&s1[i].nm);
        printf("Enter Employee Age: ");
        scanf("%d",&s1[i].age);
        printf("Enter Employee Role: ");
        scanf("%s",&s1[i].role);
        printf("Enter Employee City: ");
        scanf("%s",&s1[i].city);
        printf("Enter Employee Experience(Years): ");
        scanf("%d",&s1[i].exp);
        printf("Enter Employee Company name: ");
        scanf("%s",&s1[i].company_nm);

    }
    printf("========================================\n");

    printf("ID\tName\tAge\tRole\tCity\tExperience(Years)\tCompany Name\n-----\t-----\t-----\t-----\t-----\t-----\t\t-----\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%s\t%s\t%d\t\t%s\n",s1[i].id,s1[i].nm,s1[i].age,s1[i].role,s1[i].city,s1[i].exp,s1[i].company_nm);
    }
}