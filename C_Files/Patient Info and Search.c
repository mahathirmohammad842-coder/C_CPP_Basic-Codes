#include<stdio.h>

    struct patient{
        char name[50];
        int age;
        long long int log;
        char disease[10];

} patient[5];
int main(){
    int i,j;
    char Name[25];

    //struct patient patient[5];
    for(i=0; i<5; i++){

            printf("Enter patient Name:");
            scanf("%s",&patient[i].name);
            printf("Enter patient Age :");
            scanf("%d",&patient[i].age);
            printf("Enter patient log :");
            scanf("%lld",&patient[i].log);
            printf("Enter patient disease :");
            scanf("%s",&patient[i].disease);
            }

        printf("Enter patient name :");
        scanf("%s",&Name);
        printf("Name is %s\n",patient[j].name );
        printf("Age is %d\n",patient[j].age );
        printf("Log is %lld\n",patient[j].log );
        printf("Disease is %s\n",patient[j].disease );


return 0;
}
