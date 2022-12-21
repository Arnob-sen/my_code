#include<stdio.h>
int main()
{
    double ft_marks[20]={80,87,90,91,76,79,70,81,80,96,98,88,66,78,81,77,66,90,56,66};
    int i;
    double st_marks[20]={99,90,98,96,95,88,87,86,89,80,81,77,71,87,76,75,77,68,92,78};
    double final_marks[20]={100,98,99,96,97,93,92,95,99,88,89,87,84,87,81,80,85,80,80};
    double total_marks[20];
    for(i=0;i<40;i++){
        total_marks[i]=final_marks[i]/2+st_marks[i]/4+ft_marks[i]/4;
    }
    for(i=1;i<=40;i++){
        printf("roll no:%d\t total marks:%.2lf\n",i,total_marks[i-1]);
    }

}
