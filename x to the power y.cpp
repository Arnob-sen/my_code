#include<stdio.h>
#include<math.h>

void power(double base ,double power){

double result=1;
    for(int i=1;i<=power;i++)result=result*base;
    //result=pow(base,power);
    printf("%lf\n",result);
}
int main(){
    int a ,b;
    scanf("%d%d",&a,&b);
    power(a,b);

}
