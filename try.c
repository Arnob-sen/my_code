
#include <math.h>
#include <stdio.h>
int main(){
double a, b,c,d,x1,x2;
printf("enter the value a,b,c\n");
scanf("%lf %lf %lf",&a,&b,&c);
d = b*b -4*a*c;
if(a==0){
    printf("math error");
}
   else if(d>0){
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    printf("%lf %lf",x1,x2);
}
else if(d==0){
        x1=-b/2*a;
x2=-b/2*a;
    printf("%lf %lf",x1,x2);
}

else {
    printf("unreal root");
}


    return 0;




}
