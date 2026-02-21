#include<stdio.h>

struct student {
    char name[50];
    long long int ID;
    char bg[3];
};

int main() {
    int i;
    struct student twenty[5];

    for(i = 0; i < 5; i++) {
        printf("Enter student Name: ");
        scanf("%s", twenty[i].name);
        printf("Enter Student ID: ");
        scanf("%lld", &twenty[i].ID);
        printf("Enter Student Blood Group: ");
        scanf("%s", twenty[i].bg);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 5; i++) {
        printf("Name: %s\n", twenty[i].name);
        printf("ID: %lld\n", twenty[i].ID);
        printf("Blood Group: %s\n", twenty[i].bg);

    }

    return 0;
}
