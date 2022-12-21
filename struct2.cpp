#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
struct person{
    int age;
    double salary;

};

int main()
{
    struct person person1,person2,person3;
    scanf("%d%lf%d%lf",&person1.age,&person1.salary,&person2.age,&person2.salary);
    person3=person2;

    if(person1.age==person2.age&&person1.salary==person2.salary)printf("same\n");
  //  else if(person2.age==person3.age&&person2.salary==person3.salary)printf("same\n");
    else cout<<"Not"<<endl;



}
