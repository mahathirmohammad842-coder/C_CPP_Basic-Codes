#include<stdio.h>

struct student{
    char name[50];
    long long int ID;
    char bg[3];

};

int main(){
    int i,j;

    struct student twenty[5];
    for(i=0; i<5; i++){
        printf("Enter student Name:");
        scanf("%s",&twenty[i].name);

        printf("Enter Student id :");
        scanf("%d",&twenty[i].ID);

        printf("Enter Student Blood Group :");
        scanf("%s",&twenty[i].bg);
        }

        for(j=0; j<5; j++){
        printf("Name is %s\n",twenty[j].name );
        printf("ID is %lld\n",twenty[j].ID );
        printf("Blood Group is %s\n",twenty[j].bg );
        }
        return 0;
}
