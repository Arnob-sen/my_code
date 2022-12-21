#include <stdio.h>
int main()
{
    double x,y,a1,a2,b1,b2,c1,c2;
    printf("enter the value of a1:");
    scanf("%lf",&a1);
    printf("enter the value of b1:");
    scanf("%lf",&b1);
    printf("enter the value of c1:");
    scanf("%lf",&c1);
    printf("enter the value of a2:");
    scanf("%lf",&a2);
    printf("enter the value of b2:");
    scanf("%lf",&b2);
    printf("enter the value of c2:");
    scanf("%lf",&c2);
    x=(b2*c1-b1*c2)/(a1*b2-b2*a1);
    y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
    printf("x=%.2lf,y=%.2lf",x,y);
    return 0;

}
