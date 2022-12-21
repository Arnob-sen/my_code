#include <math.h>
#include <stdio.h>
int main()
{
    double a,b,c,x1,x2,D;
    printf("enter the value of a,b,c:\n");

    scanf("%lf %lf %lf",&a,&b,&c);

    D=b*b-4*a*c;
    if(a==0)
        {   printf("math error");


    }
   else if(D>0){
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            printf("real roots are %lf %lf",x1,x2);
    }
    else if(D==0){
        x1=-b/(2*a);
        x2=-b/(2*a);
        print("real roots are %lf %lf",x1,x2);

    }
    else{
        printf("unreal root");
    }
    return 0;


}
