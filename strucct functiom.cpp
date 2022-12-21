#include<stdio.h>

struct person {
    char name[50];

    int age;
    int salary;
};

void display(struct person p)
{
    printf("%s ",p.name);
    printf("%d ",p.age);
    printf("%d\n",p.salary);



}
    int main ()
    {
        struct person person1,person2;
        fflush(stdin);
        gets(person1.name);


        scanf("%d%d",&person1.age,&person1.salary);

        display(person1);
        gets(person2.name);
         scanf("%d%d",&person2.age,&person2.salary);

        display(person2);

    }
