#include<stdio.h>

struct person{
    int age;
    double salary;

};

int main()
{
    struct person person1,person2;
    scanf("%d%lf%d%lf",&person1.age,&person1.salary,&person2.age,&person2.salary);

    printf("%d %lf\n%d %lf\n",person1.age,person1.salary,person2.age,person2.salary);

}
