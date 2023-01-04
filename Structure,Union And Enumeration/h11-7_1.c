#include<stdio.h>

struct student
{
    int stu_id,stu_age,stu_std;
    char stu_name[200],stu_course[200],stu_city[200],stu_school[200];
};

void main()
{
    int n,i;

    printf("Enter Number of students : ");
    scanf("%d",&n);

    struct student s1[n];

    for(i=0;i<n;i++)
    {
        system("cls");

        printf("Student(%d/%d)\n--------------\n",i+1,n);

        printf("Enter Student ID: ");
        scanf("%d",&s1[i].stu_id);
        printf("Enter Student Name: ");
        scanf("%s",&s1[i].stu_name);
        printf("Enter Student Age: ");
        scanf("%d",&s1[i].stu_age);
        printf("Enter Student Course: ");
        scanf("%s",&s1[i].stu_course);
        printf("Enter Student City: ");
        scanf("%s",&s1[i].stu_city);
        printf("Enter Student Std: ");
        scanf("%d",&s1[i].stu_std);
        printf("Enter Student School: ");
        scanf("%s",&s1[i].stu_school);

    }

    printf("ID\tName\tAge\tCourse\tCity\tStd\tSchool\n-----\t-----\t-----\t-----\t-----\t-----\t-----\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s1[i].stu_id,s1[i].stu_name,s1[i].stu_age,s1[i].stu_course,s1[i].stu_city,s1[i].stu_std,s1[i].stu_school);
    }

}