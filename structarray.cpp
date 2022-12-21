#include<stdio.h>
struct person{
    int age;
    double sal;
    char name[50];
};

void display(){

      for(int i=0;i<4;i++){
        printf("%s\n %d %lf\n",person[i].name,person[i].age,person[i].sal);
    }

}
int main()
{
    struct person person[4];
    for(int i=0;i<4;i++){
            fflush(stdin);
        gets(person[i].name);
        scanf("%d",&person[i].age);
        scanf("%lf",&person[i].sal);

    }
    display();

}

