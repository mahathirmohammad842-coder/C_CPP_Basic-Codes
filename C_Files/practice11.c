#include <stdio.h>
#include<string.h>

struct mystrct
{
    char name[30];
    int age;
    float cgpa;

} student[3];

int main()
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("\n\n::: Student %d :::\n",i+1);
        printf("\nName: ");         gets(student[i].name);
        printf("Age: ");                  scanf("%d",&student[i].age);
        printf("CGPA: ");               scanf("%f",&student[i].cgpa);
        getchar();
    }

    printf("\n::: Here are the student's info  :::\n");
    for(i=0; i<3; i++)
    {
        printf("\n\n::: Student %d :::\n",i+1);
        printf("\nName: ");
        puts(student[i].name);
        printf("Age: %d",student[i].age);
        printf("\nCGPA: %f\n",student[i].cgpa);
     }

    return 0;
}
