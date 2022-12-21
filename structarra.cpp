#include<stdio.h>

struct person {
    char name[50];

    int age;
    int salary;
};
int main()
{
    struct person person[4];

    for(int i=0;i<4;i++){
             fflush(stdin);
            gets(person[i].name);

        scanf("%d%d",&person[i].age,&person[i].salary);
    }
    for(int i=0;i<4;i++){
        printf("%s\n",person[i].name);
            printf("%d %d\n",person[i].age,person[i].salary);
    }




}
