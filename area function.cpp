#include<stdio.h>

void area(double x,double y){


    double result=.5*x*y;
    printf("%lf\n",result);
}
int main()
{

    int h,b;
    scanf("%d%d",&h,&b);
    area(h,b);
}
