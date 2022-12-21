#include<stdio.h>

int main()
{
    double a;
    scanf("%lf",&a);
    if(a>0){
            printf("number is positive");


    }
    else if(a<0){
        printf("number is negative");
    }
    else if(a==0){
        printf("number is zero");
    }
    return 0;
}
