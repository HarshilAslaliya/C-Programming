#include <stdio.h>
struct emp
{
    int id;
    char name[50];
    char role[50];
    char email[50];
    int salary;
    char address[100];
};
void main()
{
    int i, n;
    printf("enter the number of employe=");
    scanf("%d", &n);
    struct emp s[n];

    for (i = 0; i < n; i++)
    {

        printf("enter employe id\t\t=");
        scanf("%d", &s[i].id);
        printf("enter employe name\t\t=");
        scanf("%s", s[i].name);
        printf("enter employe role\t\t=");
        scanf("%s", s[i].role);
        printf("enter employe email\t\t=");
        scanf("%s", s[i].email);
        printf("enter salary\t\t=");
        scanf("%d", &s[i].salary);
        printf("enter address\t\t=");
        scanf("%s", s[i].address);
    }

    printf("id\tname\tage\trole\tcity\tyear\tcompany\n----- ----- ----- ----- ----- ----- -----\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n", s[i].id, s[i].name, s[i].role, s[i].email, s[i].salary, s[i].address);
    }
}